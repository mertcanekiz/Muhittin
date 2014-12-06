#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"

class Player : public Entity
{
public:
    Player(Vector2f);

    void init();
    void input(SDL_Event);
    void update(float);
    void render(SDL_Renderer*);

private:
    const float gravityAcceleration = 0.5f;

};

#endif
