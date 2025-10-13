#include "Game.h"

Game::Game()
        :m_tiles(64)
        ,m_fruit(PartId::fruit, m_tiles)
{
        m_fruit.Move({.x = 5*64, .y = 5*64});
}

Game::~Game()
{
        return;
}

// bool Game::update()
// {
        
// }

void Game::render(){
        for (int i = 0; i < MAP_HEIGHT; i++)
        {
                for (int j = 0; j < MAP_WIDTH; j++)
                {
                        DrawTextureRec(m_tiles.getAtlasTexture(), m_tiles.getRectangle(m_map[i][j]), {.x = float(i * 64), .y = float(j * 64)}, WHITE);
                }
                
        }
        DrawTextureRec(m_tiles.getAtlasTexture(), m_fruit.getSourceRectangle(), m_fruit.getPosition(), WHITE);
}

bool Game::mapInit(){
        for (int i = 0; i < MAP_HEIGHT; i++)
        {
                for (int j = 0; j < MAP_WIDTH; j++)
                {
                        m_map[i][j] = 0;
                }
                
        }
        return 0;
}

// bool Game::LoadTextures()
// {

// }

// bool Game::loadAssets()
// {
//     LoadTextures()
// }
// bool Game::loadMap();