#include "Menu.h"
#include "../Application.h"

Menu::Menu(int id) : GameState(id)
{
    menubg = nullptr;
}

void Menu::init()
{

}

void Menu::input(SDL_Event event)
{
    if(event.type == SDL_KEYDOWN)
    {
	Application::getInstance().changeState(GameState::GAME);
    }
}

void Menu::update(float delta)
{

}

void Menu::render(SDL_Renderer* renderer)
{
    if(menubg == nullptr)
	menubg = Graphics::loadTexture(renderer, "res/menu/menubg.png");
    Graphics::renderTexture(renderer, menubg, 0, 0);
}
