#include "GameMap.h"

GameMap::GameMap()
{
    clear();

}

void GameMap::clear()
{
    for (size_t i = 0; i < SIZE; i++)
    {
        for (size_t j = 0; j < SIZE; j++)
        {
            m_grid[i][j] = State{ .id = Atlas::DEFAULT, .rotated = State::DEFAULT };
        }
    }
}

void GameMap::replace(Vector2 pos, State state)
{
    m_grid[pos.x][pos.y] = state;
}