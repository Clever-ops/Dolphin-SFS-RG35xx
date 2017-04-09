set(SRCS
  NullBackend.cpp
  VertexManager.cpp
  ShaderCache.cpp
)

if(NOT LIBRETRO)
  set(SRCS ${SRCS} Render.cpp)
endif()

set(LIBS
  videocommon
  common
)

add_dolphin_library(videonull "${SRCS}" "${LIBS}")

