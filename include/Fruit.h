#pragma once
class Fruit{
    Vec2 m_pos;
    
    public:
        Fruit();
        Fruit(float x, float y);
        ~Fruit();
        Vec2 getPos();
        void update();
    private:
        void respawn();
};