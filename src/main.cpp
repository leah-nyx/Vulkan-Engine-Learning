#include <Vulkan-Engine-Learning/application.h>

#include <cstdlib>
#include <iostream>
#include <memory>

int main()
{
    auto app = std::make_unique<HelloTriangleApplication>();

    try
    {
        app->run();
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}