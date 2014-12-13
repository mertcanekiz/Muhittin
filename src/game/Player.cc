#include "Player.h"
#include "../Application.h"

Player::Player(Vector2f position) : Entity(position)
{
    size.setX(16);
    size.setY(16);
    moveLeft = moveRight = false;
}

void Player::init()
{

}

void Player::input(SDL_Event event)
{
    bool value = event.type == SDL_KEYDOWN;
    switch(event.key.keysym.sym)
    {
    case SDLK_d:
	moveRight = value;
	break;
    case SDLK_a:
	moveLeft = value;
	break;
    case SDLK_w:
	jump = value;
	break;
    }
}

void Player::update(float delta)
{
    velocity.add(0, gravityAcceleration);

    if(moveLeft)
    {
	velocity.add(-horizontalAcceleration, 0);
    }
    else if(moveRight)
    {
	velocity.add(horizontalAcceleration, 0);
    }
    else
    {
	if(velocity.getX() > 0)
	{
	    velocity.add(-horizontalAcceleration, 0);
	}
	else if(velocity.getX() < 0)
	{
	    velocity.add(horizontalAcceleration, 0);
	}
    }

    if(std::abs(velocity.getX()) < 0.1f)
    {
	velocity.setX(0);
    }

    if(velocity.getX() >= horizontalMaxVelocity)
    {
	velocity.setX(horizontalMaxVelocity);
    }
    else if(velocity.getX() <= -horizontalMaxVelocity)
    {
	velocity.setX(-horizontalMaxVelocity);
    }

    if(jump && !falling)
    {
	velocity.setY(-jumpVelocity);
    }

    position.add(velocity);

    if(position.getY() + size.getY() >= Application::SCREEN_HEIGHT)
    {
	position.add(0, Application::SCREEN_HEIGHT - (position.getY() + size.getY()));
	velocity.setY(0);
	falling = false;
    }
    else
    {
	falling = true;
    }

}

void Player::render(SDL_Renderer* renderer)
{
    Graphics::fillRect(renderer, (int) position.getX(), (int) position.getY(),
		       16, 16, 0xff, 0x00, 0x00);
}
