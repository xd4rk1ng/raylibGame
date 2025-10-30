#include <memory>
#include <raylib.h>
#include "GameMap.h"
class Game
{
    
    public:
        static std::unique_ptr<Game>& getInstance();
        bool update();
        bool draw();
        ~Game();
    private:
        static std::unique_ptr<Game> s_instance;
        GameMap m_gameMap;
        Game();
};