#pragma once
#include "SFML/Graphics.hpp"
#include <map>
#include <string>

#include "GameState.h"
#include "gui.h"


class GameStateStart : public GameState
{
private:

    sf::View view;

    std::map<std::string, Gui> guiSystem;

    void loadgame();

public:

    virtual void draw(const float dt);
    virtual void update(const float dt);
    virtual void handleInput();

    GameStateStart(Game* game);
};