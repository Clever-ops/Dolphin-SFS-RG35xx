add_subdirectory(OGL)
add_subdirectory(Null)
add_subdirectory(Software)

if(NOT LIBRETRO AND CMAKE_SYSTEM_NAME STREQUAL "Windows")
  add_subdirectory(D3D)
  add_subdirectory(D3D12)
endif()

if(NOT APPLE)
  add_subdirectory(Vulkan)
endif()
