
set(LIBRETRO_SRCS
  audio.cpp
  boot.cpp
  host.cpp
  input.cpp
  libretro.cpp
  state.cpp
  stubs.cpp
  video.cpp
)

add_library(dolphin-libretro SHARED ${LIBRETRO_SRCS})
set_target_properties(dolphin-libretro PROPERTIES OUTPUT_NAME dolphin_libretro)
set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -Wl,--no-undefined")

target_link_libraries(dolphin-libretro PRIVATE
  core
  uicommon
  ${LIBS}
)

set(CPACK_PACKAGE_EXECUTABLES ${CPACK_PACKAGE_EXECUTABLES} dolphin-libretro)
#install(TARGETS dolphin-libretro SHARED DESTINATION ${bindir})
