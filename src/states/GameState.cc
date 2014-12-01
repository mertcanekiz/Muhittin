#include "GameState.h"
#include "Splash.h"

GameState* GameState::splash = new Splash(GameState::SPLASH);

GameState::GameState(int id) : id(id)
{

}

void GameState::cleanUp()
{
    delete splash;
}

GameState* GameState::getStateByID(int id)
{
    switch(id)
    {
    case SPLASH:
	return splash;
    }

    printf("Invalid GameState ID\n");
    return nullptr;
}
