#include "Application.h"
#include "Display.h"
#include <GL/glew.h>

int main()
{
    Display::init();
    Application app;

    app.runMainGameLoop();

    return 0;
}
