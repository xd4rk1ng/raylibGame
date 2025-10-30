#include "Atlas.h"

template <uint8_t rows, uint8_t cols>
std::unique_ptr<Atlas<rows,cols>>& Atlas<rows, cols>::getInstance()
{
    if(s_instance == nullptr)
    {
        s_instance = std::make_unique<Atlas>();
    }
    return s_instance;
}

template <uint8_t rows, uint8_t cols>
Rectangle Atlas<rows,cols>::getSrcRectangle(srcRectangle id)
{
    constexpr int column = id % cols;
    constexpr int row = id / rows;
    
    Rectangle sourceRectangle = {
        .x = static_cast<float>(column * s_SIDE_LENGHT),
        .y = static_cast<float>(row * s_SIDE_LENGHT),
        .width = static_cast<float>(s_SIDE_LENGHT),
        .height = static_cast<float>(s_SIDE_LENGHT)
    };
    return sourceRectangle;
}

template <uint8_t rows, uint8_t cols>
Atlas<rows,cols>::Atlas()
    : m_spritePath("assets/Game.png"),
    e_srcRec(DEFAULT),
    e_rotation(UP)
{
    m_baseTexture = LoadTexture(m_spritePath);
}

template <uint8_t rows, uint8_t cols>
Atlas<rows,cols>::~Atlas<rows,cols>()
{
    UnloadTexture(m_baseTexture);
}