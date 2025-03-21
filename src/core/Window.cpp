#include "Window.h"

Window::Window(int width, int height, const char *title)
{
    if (!glfwInit())
    {
        cerr << "GLFW initialization error" << endl;
    }

    pWindow = glfwCreateWindow(width, height, title, nullptr, nullptr);
    if (!pWindow)
    {
        cerr << "Failed to create GLFW window" << endl;
        glfwTerminate();
    }

    glfwMakeContextCurrent(pWindow);
}

Window::~Window()
{
    glfwDestroyWindow(pWindow);
    glfwTerminate();
}

void Window::pollEvents()
{
    glfwPollEvents();
}

bool Window::shouldClose()
{
    return glfwWindowShouldClose(pWindow);
}
