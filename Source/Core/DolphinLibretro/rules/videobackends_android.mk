SOURCES_VIDGL := $(VIDEOGL_DIR)/BoundingBox.cpp \
                 $(VIDEOGL_DIR)/FramebufferManager.cpp \
                 $(VIDEOGL_DIR)/main.cpp \
                 $(VIDEOGL_DIR)/NativeVertexFormat.cpp \
                 $(VIDEOGL_DIR)/PerfQuery.cpp \
                 $(VIDEOGL_DIR)/PostProcessing.cpp \
                 $(VIDEOGL_DIR)/ProgramShaderCache.cpp \
                 $(VIDEOGL_DIR)/RasterFont.cpp \
                 $(VIDEOGL_DIR)/Render.cpp \
                 $(VIDEOGL_DIR)/SamplerCache.cpp \
                 $(VIDEOGL_DIR)/StreamBuffer.cpp \
                 $(VIDEOGL_DIR)/TextureCache.cpp \
                 $(VIDEOGL_DIR)/TextureConverter.cpp \
                 $(VIDEOGL_DIR)/VertexManager.cpp

ifeq ($(HAVE_VULKAN),1)
   DEFINES += -DHAVE_VULKAN
   SOURCES_VULKAN := $(VIDEOVULKAN_DIR)/BoundingBox.cpp \
                     $(VIDEOVULKAN_DIR)/CommandBufferManager.cpp \
                     $(VIDEOVULKAN_DIR)/FramebufferManager.cpp \
                     $(VIDEOVULKAN_DIR)/ObjectCache.cpp \
                     $(VIDEOVULKAN_DIR)/PerfQuery.cpp \
                     $(VIDEOVULKAN_DIR)/RasterFont.cpp \
                     $(VIDEOVULKAN_DIR)/Renderer.cpp \
                     $(VIDEOVULKAN_DIR)/ShaderCompiler.cpp \
                     $(VIDEOVULKAN_DIR)/StateTracker.cpp \
                     $(VIDEOVULKAN_DIR)/StagingBuffer.cpp \
                     $(VIDEOVULKAN_DIR)/StagingTexture2D.cpp \
                     $(VIDEOVULKAN_DIR)/StreamBuffer.cpp \
                     $(VIDEOVULKAN_DIR)/SwapChain.cpp \
                     $(VIDEOVULKAN_DIR)/Texture2D.cpp \
                     $(VIDEOVULKAN_DIR)/TextureCache.cpp \
                     $(VIDEOVULKAN_DIR)/TextureConverter.cpp \
                     $(VIDEOVULKAN_DIR)/Util.cpp \
                     $(VIDEOVULKAN_DIR)/VertexFormat.cpp \
                     $(VIDEOVULKAN_DIR)/VertexManager.cpp \
                     $(VIDEOVULKAN_DIR)/VulkanContext.cpp \
                     $(VIDEOVULKAN_DIR)/VulkanLoader.cpp \
                     $(VIDEOVULKAN_DIR)/main.cpp
endif

SOURCES_VIDEOSOFT := $(VIDEOSOFTWARE_DIR)/Clipper.cpp \
                     $(VIDEOSOFTWARE_DIR)/DebugUtil.cpp \
                     $(VIDEOSOFTWARE_DIR)/EfbCopy.cpp \
                     $(VIDEOSOFTWARE_DIR)/EfbInterface.cpp \
                     $(VIDEOSOFTWARE_DIR)/Rasterizer.cpp \
                     $(VIDEOSOFTWARE_DIR)/SWRenderer.cpp \
                     $(VIDEOSOFTWARE_DIR)/SWVertexLoader.cpp \
                     $(VIDEOSOFTWARE_DIR)/SWmain.cpp \
                     $(VIDEOSOFTWARE_DIR)/SetupUnit.cpp \
                     $(VIDEOSOFTWARE_DIR)/Tev.cpp \
                     $(VIDEOSOFTWARE_DIR)/TextureEncoder.cpp \
                     $(VIDEOSOFTWARE_DIR)/TextureSampler.cpp \
                     $(VIDEOSOFTWARE_DIR)/TransformUnit.cpp

SOURCES_VIDEONULL := $(VIDEONULL_DIR)/NullBackend.cpp \
                     $(VIDEONULL_DIR)/VertexManager.cpp \
                     $(VIDEONULL_DIR)/ShaderCache.cpp
