#include "GameMap.h"
#include <raylib.h>

GameMap::GameMap()
    :m_atlas()
{
    clear();
}

void GameMap::clear()
{
    for (size_t i = 0; i < SIZE; i++)
    {
        for (size_t j = 0; j < SIZE; j++)
        {
            m_grid[i][j] = State{ 
                .id = Atlas::DEFAULT, 
                .rotated = State::DEFAULT 
            };
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

            Rectangle srcRec = m_atlas.getSrcRectangle(m_grid[i][j].id);
            
            // Position in pixels
            Rectangle destRec = {
                i * (float)m_atlas.SIDE_LENGHT,
                j * (float)m_atlas.SIDE_LENGHT,
                (float)m_atlas.SIDE_LENGHT,
                (float)m_atlas.SIDE_LENGHT
            };

            Vector2 origin = {
                m_atlas.SIDE_LENGHT / 2.0f,
                m_atlas.SIDE_LENGHT / 2.0f
            };


            DrawTexturePro(
                m_atlas.getTexture(),
                srcRec,
                destRec,
                origin,
                State::UP,
                WHITE
            );
        }
    }
}