/* --- Application.h --- */

/* ------------------------------------------
Author: undefined
Date: 3/21/2025
------------------------------------------ */

#ifndef APPLICATION_H
#define APPLICATION_H

#include <Window.h>

class Application
{
public:
    Application();
    ~Application();

    void run();

private:
    Window *pWindow;
};

#endif // APPLICATION_H
