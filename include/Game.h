#include <memory>
#include <raylib.h>
#include "GameMap.h"
#include "Snake.h"
#include "Fruit.h"
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
        Snake m_snake;
        Fruit m_fruit;
        Game();
};