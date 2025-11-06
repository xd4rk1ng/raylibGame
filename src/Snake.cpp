#include "Snake.h"
#include "Game.h"
#include <iostream>
#include <vector>

Snake::dir Snake::s_currDir = Snake::dir::UP;

Snake::Snake(float x, float y)
{
    size_t init_Size = 3;
    m_pos = Vec2(x,y);
    m_bodyPos = {Vec2{x, y-1},
                 Vec2{x, y-2},
                 Vec2{x, y-3}};
}
Snake::~Snake() = default;
Vec2 Snake::getPos()
{
    return m_pos;
}

/*
    Alters direction only when keypressed is not opposite of current direction
    (avoids snake turning 180 degrees)
*/
Vec2 Snake::input()
{
    if(IsKeyPressed(KEY_UP) && s_currDir != DOWN)
    {
        s_currDir = UP;
    }
    else if(IsKeyPressed(KEY_DOWN) && s_currDir != UP)
    {
        s_currDir = DOWN;
    }
    else if(IsKeyPressed(KEY_RIGHT) && s_currDir != LEFT)
    {
        s_currDir = RIGHT;
    }
    else if(IsKeyPressed(KEY_LEFT) && s_currDir != RIGHT)
    {
        s_currDir = LEFT;
    }
    switch (s_currDir){
        case UP:
            return Vec2{0, 1};
        case DOWN:
            return Vec2{0, -1};
        case LEFT:
            return Vec2{1, 0};
        case RIGHT:
            return Vec2{-1, 0};
        default:
            std::cout << "[DEBUG]: Could not return at Game.input()";
            return Vec2{0,0};
    }
}

void Snake::update()
{
    // moves state from the end of the snake body to the start
    // skips index 0, as it copies directly from head
    for (size_t i = 0; i < m_bodyPos.size()-1; i++)
        m_bodyPos[i] = m_bodyPos[i+1];
    m_bodyPos.front() = m_pos;
    m_pos += input();

    // out of bounds check
    if( m_pos.coords.x < 0 || m_pos.coords.x > GameMap::SIZE ||
        m_pos.coords.y < 0 || m_pos.coords.y > GameMap::SIZE)
        Game::getInstance()->gameOver();
        
    // it is impossible for snake to "eat itself" on the 2 most adjacent body parts
    for (size_t i = 0; i < m_bodyPos.size()-2; i++)
    {
        if (m_pos == m_bodyPos[i])
            Game::getInstance()->gameOver();
            return;
    }
    
    Game::getInstance()->getMap().replace(m_pos.coords, GameMap::State{Atlas::SNAKE_HEAD, (GameMap::State::rotation)s_currDir});
    for (size_t i = 0; i < m_bodyPos.size(); i++)
    {
        Game::getInstance()->getMap().replace(m_bodyPos[i].coords, GameMap::State{Atlas::SNAKE_BODY, GameMap::State::DEFAULT});
    }
}