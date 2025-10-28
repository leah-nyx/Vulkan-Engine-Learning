cmake_minimum_required(VERSION 3.23)

project(VulkanEngine)

add_executable(VulkanEngine)

target_link_libraries(VulkanEngine
    PRIVATE
        glfw
        vulkan
        dl
        pthread
        X11
        Xxf86vm
        Xrandr
        Xi
)

target_sources(VulkanEngine
    PRIVATE
        src/main.cpp
)
