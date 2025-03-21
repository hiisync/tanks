/* --- Application.cpp --- */

/* ------------------------------------------
author: undefined
date: 3/21/2025
------------------------------------------ */

#include "Application.h"
#include "Logger.h"

Application::Application()
{
    pWindow = new Window(800, 600, "Hello World");
}

Application::~Application()
{
    delete pWindow;
}

void Application::run()
{
    while (!pWindow->shouldClose())
    {
        pWindow->pollEvents();
    }

    Logger::info("App is running!");
}
