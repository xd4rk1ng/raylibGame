#include "Fruit.h"

Fruit::Fruit(int tileId, TileSet& tiles)
{
    m_tileId = tileId;
    m_sourceRectangle = tiles.getSourceRectangle(m_tileId);
    m_position = {
        .x = 64,
        .y = 64
    };
}

Rectangle Fruit::getSourceRectangle()
{
    return m_sourceRectangle;
}

Vector2 Fruit::getPosition()
{
    return m_position;
}

void Fruit::Move(Vector2 newPos)
{
    m_position = {
        .x = newPos.x,
        .y = newPos.y
    };
}