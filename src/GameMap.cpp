#include "GameMap.h"
#include <raylib.h>

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

void GameMap::draw()
{
    for (size_t i = 0; i < SIZE; i++)
    {
        for (size_t j = 0; j < SIZE; j++)
        {
            Rectangle sourceRec = m_atlas.getSrcRectangle(m_grid[i][j].id);
            DrawTexturePro(m_atlas.getTexture(), sourceRec, Rectangle{(float)i,(float)j, (float)m_atlas.SIDE_LENGHT, Atlas::SIDE_LENGHT}, {m_atlas.SIDE_LENGHT/2.0f, m_atlas.SIDE_LENGHT/2.0f }, m_grid[i][j].rotated, WHITE);
        }
        
        /* code */
    }
}