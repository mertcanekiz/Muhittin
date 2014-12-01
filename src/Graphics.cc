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

SDL_Texture* Graphics::loadTexture(SDL_Renderer* renderer, const char* filename)
{
    SDL_Texture* texture = IMG_LoadTexture(renderer, filename);

    if(texture == nullptr)
    {
	printf("Could not load texture from %s: %s\n", filename, SDL_GetError());
	exit(1);
    }

    return texture;
}

void Graphics::renderTexture(SDL_Renderer* renderer, SDL_Texture* texture, int x, int y)
{
    if(texture == nullptr)
    {
	exit(1);
    }

    SDL_Rect dst;

    dst.x = x;
    dst.y = y;
    SDL_QueryTexture(texture, nullptr, nullptr, &dst.w, &dst.h);
    SDL_RenderCopy(renderer, texture, nullptr, &dst);
}

bool Graphics::initialize()
{
    if(!(IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG))
    {
	printf("SDL_image could not initialize: %s\n", SDL_GetError());
	return false;
    }

    return true;
}
