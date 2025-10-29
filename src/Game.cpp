#include "Game.h"

Game::Game()
        :m_atlas(64)
        ,m_fruit(PartId::fruit, m_atlas)
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
        enum texture{
                map,
                fruit,
                snake_head,
                snake_body,
                snake_turn
        }
        
        mapDraw(map);
        fruitDraw(fruit);
        snakeDraw();

        DrawTextureRec(m_atlas.getAtlasTexture(), m_fruit.getSourceRectangle(), m_fruit.getPosition(), WHITE);
}

bool Game::mapDraw(int textureID){
        Rectangle sourceRec = m_atlas.getSourceRectangle(textureID);
        Vector2 position;

        for (int i = 0; i < MAP_HEIGHT; i++)
        {
                for (int j = 0; j < MAP_WIDTH; j++)
                {
                        position.x = static_cast<float>(i * 64);
                        position.y = static_cast<float>(j * 64);

                        DrawTextureRec(m_atlas.getAtlasTexture(), sourceRec, position, WHITE);
                }
        }
        return 0;
}

bool Game::fruitDraw(int textureID){
        Rectangle sourceRec = m_atlas.getSourceRectangle(textureID);
        Vector2 position;

        for(Vector2 tilePos : Fruit.)

        for ()
}

bool Game::snakeDraw(int headID, int bodyID, int turnID){

}