#ifndef MENU_H
#define MENU_H

#include "GameState.h"

class Menu : public GameState
{

public:
    Menu(int);
    virtual ~Menu() {}

    void init();
    void input(SDL_Event);
    void update(float);
    void render(SDL_Renderer*);

private:
    SDL_Texture* menubg;
};

#endif
