set(SRCS
  Clipper.cpp
  DebugUtil.cpp
  EfbCopy.cpp
  EfbInterface.cpp
  Rasterizer.cpp
  SWRenderer.cpp
  SWVertexLoader.cpp
  SWmain.cpp
  SetupUnit.cpp
  Tev.cpp
  TextureEncoder.cpp
  TextureSampler.cpp
  TransformUnit.cpp
)

if(NOT LIBRETRO)
  set(SRCS ${SRCS} SWOGLWindow.cpp)
endif()

set(LIBS
  videocommon
  SOIL
  common
  ${X11_LIBRARIES}
)

add_dolphin_library(videosoftware "${SRCS}" "${LIBS}")
