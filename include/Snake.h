#pragma once
#include "Vec2.h"
#include <vector>
class Snake
{
    Vec2 m_pos;
    std::vector<Vec2> m_bodyPos;
    enum dir{
        UP,
        DOWN,
        RIGHT,
        LEFT
    };
    static dir s_currDir;
    
    public:
        Snake(float x = 7, float y = 7);
        ~Snake();
        Vec2 getPos();
        void update();
    private:
        Vec2 input();
};