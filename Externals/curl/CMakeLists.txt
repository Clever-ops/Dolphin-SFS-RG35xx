include_directories(include/)
add_subdirectory(lib)

if (__SWITCH__)
  find_package(Libnx REQUIRED)
endif()
