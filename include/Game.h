
#include <memory>
#include <raylib.h>
class Game
{
    public:
        static std::unique_ptr<Game>& getInstance();
        bool update();
        bool draw();
        ~Game();
    private:
        static std::unique_ptr<Game> s_instance;
        Game();
        bool init();
};