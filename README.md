# Vulkan Extension

This extension enables Vulkan support for Defold, by adding a Vulkan graphics adapter that will be used if the client device supports it. If Vulkan is not supported, the default OpenGL will be used instead.


## Installation

### Add project dependencies

In order to add Vulkan support you need to add the extension to your own project by adding this extension as a [Defold library dependency](http://www.defold.com/manuals/libraries/). Open your ["game.project"](defold://open?path=/game.project) file and in the dependencies field under project add:

> https://github.com/defold/extension-vulkan/archive/master.zip

Or point to the ZIP file of a [specific release](https://github.com/defold/extension-vulkan/releases) (recommended!).


### Enable Output Spirv option 

Note that this extension requires that the 'Output Spirv' (`shader.output_spirv`) setting is enabled in the ["game.project"](defold://open?path=/game.project) file, otherwise you will get compilation errors when building your projects.


## Getting help

If you run into trouble or if you notice any artifacts while using this extension, please visit [our forum](https://forum.defold.com) and let us know about it. You can also [create an issue here](https://github.com/defold/extension-vulkan/issues/new/choose).

---

### Using only Vulkan

If you want to only build using Vulkan you need to make sure to exclude the OpenGL graphics adaptor. You can do this by creating an application manifest and using it in the Native Extension section of your ["game.project"](defold://open?path=/game.project) file. You can create an application manifest using this tool: https://britzl.github.io/manifestation/
