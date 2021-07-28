#pragma once
#include <SFML/System.hpp>
#include <string>
#include <map>

#include "GameState.h"
#include "map.h"
#include "gui.h"
#include "city.h"

enum class ActionState { NONE, PANNING, SELECTING };

class GameStateEditor : public GameState
{
private:

    ActionState actionState;

    sf::View gameView;
    sf::View guiView;

    City city;

    sf::Vector2i panningAnchor;
    float zoomLevel;

    sf::Vector2i selectionStart;
    sf::Vector2i selectionEnd;

    Tile* currentTile;
    std::map<std::string, Gui> guiSystem;

public:

    virtual void draw(const float dt);
    virtual void update(const float dt);
    virtual void handleInput();

    GameStateEditor(Game* game);
};
