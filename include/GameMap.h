#include "Atlas.h"
#include "Vec2.h"
#include <array>
#include <raylib.h>
class GameMap
{
    
    public:
        static constexpr uint8_t SIZE = 16;
        GameMap();
        ~GameMap() = default;
        
        struct State{
            Atlas::recId id;
            enum rotation{
                UP = 0,
                RIGHT = 90,
                LEFT = 270,
                DOWN = 180,
                DEFAULT = UP
            } rotated;
        };

        void replace(Vector2 position, State state);
        void clear();
        void draw();
    private:
        Atlas m_atlas;
        std::array<std::array<State, SIZE>, SIZE>  m_grid;
    
};