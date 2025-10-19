#pragma once

#include "TileSet.h"
#include "Snake.h"
#include "Fruit.h"

const int MAP_WIDTH = 10;
const int MAP_HEIGHT = 10;
const int TILE_SIZE = 32;

class Game{
    static const int MAP_WIDTH = 16;
    static const int MAP_HEIGHT = 16;
    static const int TILE_SIZE = 64;
    enum PartId {
        empty,
        fruit,
        head,
        body,
        corner // bends left, needs rotation to apply right
    };

    private:
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