#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"
#include <cmath>

class Player : public Entity
{
public:
    Player(Vector2f);

    void init();
    void input(SDL_Event);
    void update(float);
    void render(SDL_Renderer*);

private:
    const float gravityAcceleration = 0.4f;
    const float verticalMaxVelocity = 10.0f;
    const float horizontalAcceleration = 0.18f;
    const float horizontalMaxVelocity = 4.3f;
    const float jumpVelocity = 5.0f;
    bool moveLeft, moveRight, jump, falling;

};

#endif
