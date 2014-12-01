#ifndef APPLICATION_H
#define APPLICATION_H

#include "Graphics.h"
#include <SDL2/SDL.h>

class Application
{

public:
    static Application& getInstance()
    {
	static Application instance;
	return instance;
    }

    int execute();

    static const int SCREEN_WIDTH  = 640;
    static const int SCREEN_HEIGHT = 480;

private:
    Application() {}
    bool initialize();
    void input(SDL_Event);
    void update(float);
    void render();
    void stop();
    void cleanUp();

    SDL_Window* window;
    SDL_Renderer* renderer;
    bool running;

    Application(const Application&);
    void operator=(const Application&);
};

#endif
