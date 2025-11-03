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
        bool update();
        bool draw();
        ~Game();
    private:
        static std::unique_ptr<Game> s_instance;
        GameMap m_gameMap;
        Snake m_snake;
        Fruit m_fruit;
        Game();
};