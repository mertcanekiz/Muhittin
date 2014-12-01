#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Graphics
{

public:
    static void fillRect(SDL_Renderer*, int, int, int, int, int, int, int);

};

#endif
