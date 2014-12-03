#include "Game.h"
#include "../Application.h"

Game::Game(int id) : GameState(id)
{

}

void Game::init()
{

}

void Game::input(SDL_Event event)
{
    if(event.type == SDL_KEYDOWN)
	Application::getInstance().stop();
}

void Game::update(float delta)
{

}

void Game::render(SDL_Renderer* renderer)
{

}
