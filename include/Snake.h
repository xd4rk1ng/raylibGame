#pragma once

class Snake
{
    Vec2 m_pos;
    
    public:
        Snake();
        Snake(float x, float y);
        ~Snake();
        Vec2 getPos();
        void update();
    private:
        void respawn();
};