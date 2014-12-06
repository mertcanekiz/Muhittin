#include "Player.h"
#include "../Application.h"

Player::Player(Vector2f position) : Entity(position)
{
    size.setX(16);
    size.setY(16);
}

void Player::init()
{

}

void Player::input(SDL_Event event)
{

}

void Player::update(float delta)
{
    velocity.add(0, gravityAcceleration);
    position.add(velocity);
    if(position.getY() + size.getY() >= Application::SCREEN_HEIGHT)
    {
	position.add(0, Application::SCREEN_HEIGHT - (position.getY() + size.getY()));
	velocity.setY(0);
    }

}

void Player::render(SDL_Renderer* renderer)
{
    Graphics::fillRect(renderer, (int) position.getX(), (int) position.getY(),
		       16, 16, 0xff, 0x00, 0x00);
}
