#include "Game.h"

std::unique_ptr<Game> Game::s_instance = nullptr;

std::unique_ptr<Game>& Game::getInstance()
{
    if(!s_instance)
        s_instance.reset(new Game());
    return s_instance;
}

GameMap& Game::getMap()
{ 
    return m_gameMap;
}

Snake& Game::getSnake()
{
    return m_snake;
}

Fruit& Game::getFruit()
{
    return m_fruit;
}

bool Game::update()
{
    m_snake.update();
    m_fruit.update();
    return true;    
}

bool Game::draw()
{
    m_gameMap.draw();
    return true;
}

Game::Game()
{
    m_snake = Snake();
    m_fruit = Fruit();
    m_gameMap = GameMap();
}
Game::~Game() = default;

void Game::gameOver()
{
    DrawText("Game Over!", GetScreenWidth()/2, GetScreenHeight()/2, 20, RED);
    IsKeyDown(KEY_ENTER);
}
