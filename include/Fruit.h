#pragma once

#include "TileSet.h"
#include "Entity.h"

class Fruit : Entity
{
    private:
        Rectangle m_sourceRectangle;
        int m_tileId;
        Vector2 m_position;

    public:
        Fruit(int tileId, TileSet& tiles);
        Rectangle getSourceRectangle();
        Vector2 getPosition();
        void Move(Vector2 newPost);
};