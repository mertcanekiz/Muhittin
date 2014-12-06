#ifndef ENTITY_H
#define ENTITY_H

#include <cstdio>
#include <SDL2/SDL.h>
#include "../Graphics.h"
#include "../Vector2f.h"

class Entity
{

public:
    Entity(Vector2f = Vector2f(0,0));
    virtual ~Entity() {}

    virtual void init() = 0;
    virtual void input(SDL_Event) = 0;
    virtual void update(float) = 0;
    virtual void render(SDL_Renderer*) = 0;

    inline Vector2f getPosition() const { return position; }

protected:
    Vector2f position;
    Vector2f size;
    Vector2f velocity;
};

#endif
