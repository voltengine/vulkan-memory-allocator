cmake_minimum_required(VERSION 3.20)
project(VulkanMemoryAllocator LANGUAGES CXX)

add_library(${PROJECT_NAME} SHARED
	"${CMAKE_CURRENT_SOURCE_DIR}/include/vk_mem_alloc.h"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/vk_mem_alloc.cpp"
)
add_library(${PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} PRIVATE Glad::Glad)

target_compile_definitions(${PROJECT_NAME} PUBLIC
    VMA_DYNAMIC_VULKAN_FUNCTIONS=1
)

target_include_directories(${PROJECT_NAME} PUBLIC
	"${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

set_target_properties(${PROJECT_NAME} PROPERTIES
	OUTPUT_NAME "vma"
	CXX_EXTENSIONS OFF
	CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
)
