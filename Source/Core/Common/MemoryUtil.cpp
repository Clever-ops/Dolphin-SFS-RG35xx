// Copyright 2008 Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.

#include <cstddef>
#include <cstdlib>
#include <string>

#include "Common/CommonFuncs.h"
#include "Common/CommonTypes.h"
#include "Common/Logging/Log.h"
#include "Common/MemoryUtil.h"
#include "Common/MsgHandler.h"

#ifdef _WIN32
#include <windows.h>
#include <psapi.h>
#include "Common/StringUtil.h"
#else
#include <stdio.h>
#include <sys/mman.h>
#include <sys/types.h>
#if defined __APPLE__ || defined __FreeBSD__ || defined __OpenBSD__
#include <sys/sysctl.h>
#elif defined __HAIKU__
#include <OS.h>
#else
#include <sys/sysinfo.h>
#endif
#endif

namespace Common
{
#if defined(_M_X86_64)
#if defined(_WIN32)
static SYSTEM_INFO sys_info;
#define MEM_PAGE_SIZE (uintptr_t)(sys_info.dwPageSize)
#else
#include <unistd.h>
#define MEM_PAGE_SIZE (getpagesize())
#endif

static uintptr_t RoundPage(uintptr_t addr)
{
  uintptr_t mask = MEM_PAGE_SIZE - 1;
  return (addr + mask) & ~mask;
}
#endif

static int hint_location;

#if defined(_WIN32) && defined(_M_X64)
static uintptr_t last_executable_addr;
static void *SearchForFreeMem(size_t size)
{
  if (!last_executable_addr)
    last_executable_addr = (uintptr_t) &hint_location - sys_info.dwPageSize;
  last_executable_addr -= size;

  MEMORY_BASIC_INFORMATION info;
  while (VirtualQuery((void *)last_executable_addr, &info, sizeof(info)) == sizeof(info))
  {
    // went too far, unusable for executable memory
    if (last_executable_addr + 0x80000000 < (uintptr_t) &hint_location)
      return NULL;

    uintptr_t end = last_executable_addr + size;
    if (info.State != MEM_FREE)
    {
      last_executable_addr = (uintptr_t) info.AllocationBase - size;
      continue;
    }

    if ((uintptr_t)info.BaseAddress + (uintptr_t)info.RegionSize >= end &&
      (uintptr_t)info.BaseAddress <= last_executable_addr)
      return (void *)last_executable_addr;

    last_executable_addr -= size;
  }

  return NULL;
}
#endif

// This is purposely not a full wrapper for virtualalloc/mmap, but it
// provides exactly the primitive operations that Dolphin needs.

void* AllocateExecutableMemory(size_t size)
{
#if defined(_WIN32)
  void* ptr;
#if defined(_M_X86_64)
  if (sys_info.dwPageSize == 0)
    GetSystemInfo(&sys_info);

  if ((uintptr_t) &hint_location > 0xFFFFFFFFULL)
  {
    size_t aligned_size = RoundPage(size);
    ptr = SearchForFreeMem(aligned_size);
    if (!ptr) {
      // Let's try again, from the top.
      // When we deallocate, this doesn't change, so we eventually run out of space.
      last_executable_addr = 0;
      ptr = SearchForFreeMem(aligned_size);
    }
    if (ptr)
      ptr = VirtualAlloc(ptr, aligned_size, MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE);
    else
      ERROR_LOG(MEMMAP, "Unable to find nearby executable memory for jit");
  }
  else
#endif
    ptr = VirtualAlloc(0, size, MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE);
#else
  static char* map_hint = nullptr;
#if defined(_M_X86_64)
  // Try to request one that is close to our memory location if we're in high memory.
  // We use a dummy global variable to give us a good location to start from.
  if (!map_hint)
  {
    if ((uintptr_t) &hint_location > 0xFFFFFFFFULL)
      map_hint = (char*)RoundPage((uintptr_t)&hint_location) - 0x20000000; // 0.5gb lower than our approximate location
    else
      map_hint = (char*)0x20000000; // 0.5GB mark in memory
  }
  else if ((uintptr_t) map_hint > 0xFFFFFFFFULL)
  {
    map_hint -= RoundPage(size); /* round down to the next page if we're in high memory */
  }
#endif
  void* ptr = mmap(map_hint, size, PROT_READ | PROT_WRITE | PROT_EXEC, MAP_ANON | MAP_PRIVATE, -1, 0);
#endif /* defined(_WIN32) */

#ifdef _WIN32
  if (ptr == nullptr)
  {
#else
  if (ptr == MAP_FAILED)
  {
    ptr = nullptr;
#endif
    PanicAlert("Failed to allocate executable memory.");
  }
#if !defined(_WIN32) && defined(_M_X86_64)
  else
  {
    if ((uintptr_t) map_hint <= 0xFFFFFFFF)
    {
      // Round up if we're below 32-bit mark, probably allocating sequentially.
      map_hint += RoundPage(size);

      // If we moved ahead too far, skip backwards and recalculate.
      // When we free, we keep moving forward and eventually move too far.
      if ((uintptr_t)map_hint - (uintptr_t) &hint_location >= 0x70000000) {
        map_hint = 0;
      }
    }
  }
#endif

  return ptr;
}

void* AllocateMemoryPages(size_t size)
{
#ifdef _WIN32
  void* ptr = VirtualAlloc(0, size, MEM_COMMIT, PAGE_READWRITE);
#else
  void* ptr = mmap(nullptr, size, PROT_READ | PROT_WRITE, MAP_ANON | MAP_PRIVATE, -1, 0);

  if (ptr == MAP_FAILED)
    ptr = nullptr;
#endif

  if (ptr == nullptr)
    PanicAlert("Failed to allocate raw memory");

  return ptr;
}

void* AllocateAlignedMemory(size_t size, size_t alignment)
{
#ifdef _WIN32
  void* ptr = _aligned_malloc(size, alignment);
#else
  void* ptr = nullptr;
  if (posix_memalign(&ptr, alignment, size) != 0)
    ERROR_LOG(MEMMAP, "Failed to allocate aligned memory");
#endif

  if (ptr == nullptr)
    PanicAlert("Failed to allocate aligned memory");

  return ptr;
}

void FreeMemoryPages(void* ptr, size_t size)
{
  if (ptr)
  {
    bool error_occurred = false;

#ifdef _WIN32
    if (!VirtualFree(ptr, 0, MEM_RELEASE))
      error_occurred = true;
#else
    int retval = munmap(ptr, size);

    if (retval != 0)
      error_occurred = true;
#endif

    if (error_occurred)
      PanicAlert("FreeMemoryPages failed!\n%s", GetLastErrorMsg().c_str());
  }
}

void FreeAlignedMemory(void* ptr)
{
  if (ptr)
  {
#ifdef _WIN32
    _aligned_free(ptr);
#else
    free(ptr);
#endif
  }
}

void ReadProtectMemory(void* ptr, size_t size)
{
  bool error_occurred = false;

#ifdef _WIN32
  DWORD oldValue;
  if (!VirtualProtect(ptr, size, PAGE_NOACCESS, &oldValue))
    error_occurred = true;
#else
  int retval = mprotect(ptr, size, PROT_NONE);

  if (retval != 0)
    error_occurred = true;
#endif

  if (error_occurred)
    PanicAlert("ReadProtectMemory failed!\n%s", GetLastErrorMsg().c_str());
}

void WriteProtectMemory(void* ptr, size_t size, bool allowExecute)
{
  bool error_occurred = false;

#ifdef _WIN32
  DWORD oldValue;
  if (!VirtualProtect(ptr, size, allowExecute ? PAGE_EXECUTE_READ : PAGE_READONLY, &oldValue))
    error_occurred = true;
#else
  int retval = mprotect(ptr, size, allowExecute ? (PROT_READ | PROT_EXEC) : PROT_READ);

  if (retval != 0)
    error_occurred = true;
#endif

  if (error_occurred)
    PanicAlert("WriteProtectMemory failed!\n%s", GetLastErrorMsg().c_str());
}

void UnWriteProtectMemory(void* ptr, size_t size, bool allowExecute)
{
  bool error_occurred = false;

#ifdef _WIN32
  DWORD oldValue;
  if (!VirtualProtect(ptr, size, allowExecute ? PAGE_EXECUTE_READWRITE : PAGE_READWRITE, &oldValue))
    error_occurred = true;
#else
  int retval = mprotect(ptr, size, allowExecute ? (PROT_READ | PROT_WRITE | PROT_EXEC) :
                                                  PROT_WRITE | PROT_READ);

  if (retval != 0)
    error_occurred = true;
#endif

  if (error_occurred)
    PanicAlert("UnWriteProtectMemory failed!\n%s", GetLastErrorMsg().c_str());
}

std::string MemUsage()
{
#ifdef _WIN32
#pragma comment(lib, "psapi")
  DWORD processID = GetCurrentProcessId();
  HANDLE hProcess;
  PROCESS_MEMORY_COUNTERS pmc;
  std::string Ret;

  // Print information about the memory usage of the process.

  hProcess = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, FALSE, processID);
  if (nullptr == hProcess)
    return "MemUsage Error";

  if (GetProcessMemoryInfo(hProcess, &pmc, sizeof(pmc)))
    Ret = StringFromFormat("%s K", ThousandSeparate(pmc.WorkingSetSize / 1024, 7).c_str());

  CloseHandle(hProcess);
  return Ret;
#else
  return "";
#endif
}

size_t MemPhysical()
{
#ifdef _WIN32
  MEMORYSTATUSEX memInfo;
  memInfo.dwLength = sizeof(MEMORYSTATUSEX);
  GlobalMemoryStatusEx(&memInfo);
  return memInfo.ullTotalPhys;
#elif defined __APPLE__ || defined __FreeBSD__ || defined __OpenBSD__
  int mib[2];
  size_t physical_memory;
  mib[0] = CTL_HW;
#ifdef __APPLE__
  mib[1] = HW_MEMSIZE;
#elif defined __FreeBSD__
  mib[1] = HW_REALMEM;
#elif defined __OpenBSD__
  mib[1] = HW_PHYSMEM;
#endif
  size_t length = sizeof(size_t);
  sysctl(mib, 2, &physical_memory, &length, NULL, 0);
  return physical_memory;
#elif defined __HAIKU__
  system_info sysinfo;
  get_system_info(&sysinfo);
  return static_cast<size_t>(sysinfo.max_pages * B_PAGE_SIZE);
#else
  struct sysinfo memInfo;
  sysinfo(&memInfo);
  return (size_t)memInfo.totalram * memInfo.mem_unit;
#endif
}

}  // namespace Common
