#include "Atlas.h"
#include "raylib.h"
Rectangle Atlas::getSrcRectangle(recId id)
{
    const int column = id % COLS;
    const int row = id / ROWS;
    
    Rectangle sourceRectangle = {
        .x = static_cast<float>(column * SIDE_LENGHT),
        .y = static_cast<float>(row * SIDE_LENGHT),
        .width = static_cast<float>(SIDE_LENGHT),
        .height = static_cast<float>(SIDE_LENGHT)
    };
    return sourceRectangle;
}

Texture2D Atlas::getTexture()
{
    return m_baseTexture;
}

Atlas::Atlas()
    : m_spritePath("assets/Game.png")
{
    m_baseTexture = LoadTexture(m_spritePath);
}

Atlas::~Atlas()
{
    UnloadTexture(m_baseTexture);
}