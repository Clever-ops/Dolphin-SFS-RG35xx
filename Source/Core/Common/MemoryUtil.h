// Copyright 2008 Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.

#pragma once

#include <cstddef>
#include <cstring>
#include <string>

namespace Common
{
void* AllocateExecutableMemory(size_t size, bool low = true);
void* AllocateMemoryPages(size_t size);
void FreeMemoryPages(void* ptr, size_t size);
void* AllocateAlignedMemory(size_t size, size_t alignment);
void FreeAlignedMemory(void* ptr);
void ReadProtectMemory(void* ptr, size_t size);
void WriteProtectMemory(void* ptr, size_t size, bool executable = false);
void UnWriteProtectMemory(void* ptr, size_t size, bool allowExecute = false);
std::string MemUsage();
size_t MemPhysical();


class Jit_data_allocator
{
   static uint8_t* m_buffer;
   static uint8_t* m_last_buffer;
   static size_t m_pos;
   static int m_ref_count;
public:
   static void* alloc(size_t size);
   static void free(void* data);
};

template <typename T>
class Jit_data
{
   T* m_data;
public:
   Jit_data(T val = (T)0)
   {
      m_data = (T*)Jit_data_allocator::alloc(sizeof(T));
      *m_data = val;
   }
   ~Jit_data()
   {
      Jit_data_allocator::free(m_data);
      m_data = nullptr;
   }
   T* operator&()
   {
      return m_data;
   }
   operator T&()
   {
      return *m_data;
   }
   constexpr T& operator = (const T val)
   {
      return *m_data = val;
   }
};

template <typename T, size_t count>
class Jit_data_array
{
   typedef T T_array[count];
   T_array* m_data;

public:
#if 0 /* need to use std::initializer_list to get past narrowing convertion warnings :( */
   template<typename ...T_vals>
   Jit_data_array(T_vals...vals)
   {
      T test[count] = {vals... };
      m_data = (T_array*)Jit_data_allocator::alloc(sizeof(T_array));
      memcpy(m_data, test, sizeof(T_array));
   }
#else
   Jit_data_array()
   {
      m_data = (T_array*)Jit_data_allocator::alloc(sizeof(T_array));
      memset(m_data , 0, sizeof(T_array));
   }
   Jit_data_array(std::initializer_list<T> vals)
   {
      m_data = (T_array*)Jit_data_allocator::alloc(sizeof(T_array));
      if(vals.size() < count)
      {
         memcpy(m_data, vals.begin(), vals.size() * sizeof(T));
         memset(*m_data + vals.size(), 0, (count - vals.size()) * sizeof(T));
      }
      else
         memcpy(m_data, vals.begin(), count * sizeof(T));
   }
#endif
   ~Jit_data_array()
   {
      Jit_data_allocator::free(m_data);
      m_data = nullptr;
   }
   T_array& operator =(const Jit_data_array<T, count>& source)
   {
      memcpy(m_data, source.m_data, sizeof(T_array));
      return *m_data;
   }
   T_array* operator&()
   {
      return m_data;
   }
   operator T_array&()
   {
      return *m_data;
   }
   operator T_array&() const
   {
      return *m_data;
   }

};

}  // namespace Common
