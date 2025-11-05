#include "Game.h"
#include "Random.h"
#include "Fruit.h"


Fruit::Fruit()
{
    respawn();
}

Fruit::Fruit(float x, float y)
{
    Vec2 m_pos = Vec2(x, y);
}
Fruit::~Fruit() = default;
Vec2 Fruit::getPos() { return m_pos;}

void Fruit::update() 
{ 
    if(Game::getInstance()->getSnake().getPos() == m_pos)
    {
        respawn();
        Game::getInstance()->getMap().replace(m_pos.coords, GameMap::State{.id = Atlas::FRUIT, .rotated = GameMap::State::DEFAULT});
    }
}
/*
    This method is meant to run AFTER Snake has updated it's position.
    It checks if Snake is sitting on the Fruit tile, if so, respawns the fruit.
*/
void Fruit::respawn()
{
    Vec2 snakePos = Game::getInstance()->getSnake().getPos();
    
    do
    {
        uint8_t x = rnd::Int(0, GameMap::SIZE);
        uint8_t y = rnd::Int(0, GameMap::SIZE);
        m_pos = Vec2(x, y);
    } while (m_pos == snakePos);
}