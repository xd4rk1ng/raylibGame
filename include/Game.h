#include <memory>
#include <raylib.h>
#include "GameMap.h"
#include "Snake.h"
#include "Fruit.h"
<<<<<<< HEAD

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
=======
class Game
{
    
    public:
        static std::unique_ptr<Game>& getInstance();
        GameMap& getMap();
        Fruit& getFruit();
        Snake& getSnake();
        bool update();
        bool draw();
        ~Game();
        void gameOver();
    private:
        static std::unique_ptr<Game> s_instance;
        GameMap m_gameMap;
>>>>>>> refactor_1
        Snake m_snake;
        Fruit m_fruit;
        Game();
};