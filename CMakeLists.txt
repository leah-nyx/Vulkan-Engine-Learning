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

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

target_sources(VulkanEngine
    PRIVATE
        src/application.cpp
        src/main.cpp
)
