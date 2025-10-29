#pragma once

#include "TileSet.h"
#include "Snake.h"
#include "Fruit.h"

class Game{
    public:
        static const int MAP_WIDTH = 16;
        static const int MAP_HEIGHT = 16;
        static const int TILE_SIZE = 64;
        static const int MAX_NO_TEXTURES = 3;
    private:

        enum PartId {
            empty,
            fruit,
            head,
            body,
            corner // bends left, needs rotation to apply right
        };

        int m_gameMap[16][16];
        TileSet m_atlas;
        Snake m_snake;
        Fruit m_fruit;
        // score and UI...
    public:
        Game();
        void update();
        void render();
        ~Game();

    private:
        bool mapDraw(int textureID);
        bool fruitDraw(int textureID);
        bool snakeDraw(int headID, int bodyID, int turnID);
};