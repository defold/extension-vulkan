# Vulkan Extension

This extension enables Vulkan support for Defold, by adding a Vulkan graphics adapter that will be used if the client device supports it. If Vulkan is not supported, the default OpenGL will be used instead.

Note that this extension requires that the 'Output Spirv' (`shader.output_spirv`) setting is enabled in the ["game.project"](defold://open?path=/game.project) file, otherwise you will get compilation errors when building your projects.

If you run into trouble or if you notice any artifacts while using this extension, please visit [our forum](https://forum.defold.com) and let us know about it.

---
