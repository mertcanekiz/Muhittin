#include "Graphics.h"

void Graphics::fillRect(SDL_Renderer* renderer, int x, int y,
			int w, int h, int r, int g, int b)
{
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.w = w;
    rect.h = h;

    SDL_SetRenderDrawColor(renderer, r, g, b, 0xff);
    SDL_RenderFillRect(renderer, &rect);
}
