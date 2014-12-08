#include "Game.h"
#include "../../Application.h"

Game::Game(int id) : GameState(id), player(Vector2f(100, 101))
{

}

void Game::init()
{

}

void Game::input(SDL_Event event)
{
    player.input(event);
}

void Game::update(float delta)
{
    player.update(delta);
}

void Game::render(SDL_Renderer* renderer)
{
    player.render(renderer);
}
