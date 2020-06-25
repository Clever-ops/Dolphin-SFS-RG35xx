add_subdirectory(OGL)
add_subdirectory(Null)
add_subdirectory(Software)

if (NOT __SWITCH__)
  add_subdirectory(Vulkan)
ENDIF()

if(CMAKE_SYSTEM_NAME STREQUAL "Windows")
  add_subdirectory(D3D)
endif()

