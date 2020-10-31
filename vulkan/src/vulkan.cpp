// Defold SDK
#include <dmsdk/sdk.h>

#define LIB_NAME "Vulkan"

extern "C" void GraphicsAdapterVulkan();

dmExtension::Result AppInitializeVulkan(dmExtension::AppParams* params)
{
    GraphicsAdapterVulkan();
    return dmExtension::RESULT_OK;
}

dmExtension::Result InitializeVulkan(dmExtension::Params* params)
{
    return dmExtension::RESULT_OK;
}

dmExtension::Result AppFinalizeVulkan(dmExtension::AppParams* params)
{
    return dmExtension::RESULT_OK;
}

dmExtension::Result FinalizeVulkan(dmExtension::Params* params)
{
    return dmExtension::RESULT_OK;
}

DM_DECLARE_EXTENSION(Vulkan, LIB_NAME, AppInitializeVulkan, AppFinalizeVulkan, InitializeVulkan, 0, 0, FinalizeVulkan)
