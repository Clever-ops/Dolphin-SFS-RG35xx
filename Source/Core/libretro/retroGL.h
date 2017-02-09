
#pragma once

#include "Common/GL/GLInterfaceBase.h"

class cInterfaceRGL : public cInterfaceBase
{
private:

protected:

public:
   void Swap() override;
   void SwapInterval(int interval) override;
   void SetMode(GLInterfaceMode mode) override { s_opengl_mode = mode; }
   void *GetFuncAddress(const std::string &name) override;
   bool Create(void *window_handle, bool core) override;
   bool Create(cInterfaceBase *main_context) override;
   bool MakeCurrent() override;
   bool ClearCurrent() override;
   void Shutdown() override;
   void UpdateHandle(void *window_handle) override;
   void UpdateSurface() override;
   std::unique_ptr<cInterfaceBase> CreateSharedContext() override;
};
