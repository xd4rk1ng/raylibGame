#include "GameMap.h"

GameMap::GameMap()
{
    for (size_t i = 0; i < SIZE; i++)
    {
        for (size_t j = 0; j < SIZE; j++)
        {
            m_grid[i][j] = myAtlas::recId::DEFAULT;
        }
    }
}