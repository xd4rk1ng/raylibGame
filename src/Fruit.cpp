#include "Game.h"
#include "Random.h"


Fruit::Fruit()
{
    respawn();
}

Fruit::Fruit(float x, float y)
{
    Vec2 m_pos = Vec2(x, y);
}
uint8_t Fruit::getId() { return Atlas::FRUIT; } 

Vec2 Fruit::getPos() { return m_pos;}

void Fruit::update() 
{ 
    if(Game::getInstance()->getSnake().getPosition() == m_pos)
    {
        respawn();
        Game::getInstance()->getMap().replace(m_pos.coords, GameMap::State{.id = Atlas::FRUIT, .rotated = GameMap::State::DEFAULT});
    }
}

void Fruit::respawn()
{
    Vec2 snakePos = Game::getInstance()->getSnake().getPosition();
    
    do
    {
        uint8_t x = rnd::Int(0, GameMap::SIZE);
        uint8_t y = rnd::Int(0, GameMap::SIZE);
        m_pos = Vec2(x, y);
    } while (m_pos == snakePos);
}