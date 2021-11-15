#include <glad/vulkan.h>

#define VMA_IMPLEMENTATION

#if _WIN32
	#define VMA_CALL_PRE __declspec(dllexport)
#endif

#include <vk_mem_alloc.h>
