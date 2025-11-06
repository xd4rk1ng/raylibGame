#pragma once
<<<<<<< HEAD

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
=======
class Fruit{
    Vec2 m_pos;
    
    public:
        Fruit(float x=0, float y=0);
        ~Fruit();
        Vec2 getPos();
        void update();
    private:
        void respawn();
>>>>>>> refactor_1
};