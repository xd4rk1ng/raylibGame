#include "Game.h"

std::unique_ptr<Game> Game::s_instance = nullptr;

std::unique_ptr<Game>& Game::getInstance()
{
    if(!s_instance)
        s_instance.reset(new Game());
    return s_instance;
}

bool Game::update()
{
    return true;    
}

bool Game::draw()
{
    return true;
}

Game::Game()
{

}
Game::~Game()
{

}
