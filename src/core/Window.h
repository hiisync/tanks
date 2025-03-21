#ifndef WINDOW_H
#define WINDOW_H

#include <GLFW/glfw3.h>
#include <iostream>

using namespace std;

class Window
{
public:
    Window(int width, int height, const char *title);
    ~Window();

    void pollEvents();
    bool shouldClose();

private:
    GLFWwindow *pWindow; // Declare pWindow here
};

#endif // WINDOW_H
