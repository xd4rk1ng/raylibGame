#include "Atlas.h"
#include <array>
class GameMap
{
    static constexpr uint8_t SIZE = 16;
    
    public:
        GameMap();
        ~GameMap();
        
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