#include "Atlas.h"
#include <array>
class GameMap
{
    static constexpr uint8_t atlasRows = 1;
    static constexpr uint8_t atlasCols = 4;

    public:
        static constexpr uint8_t SIZE = 16;
        GameMap();
        ~GameMap();

    private:
        using myAtlas = Atlas<atlasRows,atlasCols>;
        std::unique_ptr<myAtlas> m_atlas = std::move(myAtlas::getInstance());

        std::array<std::array<myAtlas::recId, SIZE>, SIZE>  m_grid;

};