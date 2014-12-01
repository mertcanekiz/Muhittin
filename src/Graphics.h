#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Graphics
{

public:
    static bool initialize();
    static SDL_Texture* loadTexture(SDL_Renderer*, const char*);
    static void fillRect(SDL_Renderer*, int, int, int, int, int, int, int);
    static void renderTexture(SDL_Renderer*, SDL_Texture*, int, int);

};

#endif
