#include "Snake.h"
#include "Fruit.h"

const int MAP_WIDTH = 10;
const int MAP_HEIGHT = 10;
const int TILE_SIZE = 32;

class Game{
    static const int MAP_WIDTH = 10;
    static const int MAP_HEIGHT = 10;
    static const int TILE_SIZE = 32;
    private:
        Texture2D map[MAP_WIDTH][MAP_HEIGHT];
        Snake snake;
        Fruit fruit;
        // score and UI...
    public:
        Game();
        void update();
        void render();
        ~Game();

    private:
        void loadAssets();
        void loadMap();
};