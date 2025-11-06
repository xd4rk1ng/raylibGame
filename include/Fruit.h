#pragma once
class Fruit{
    Vec2 m_pos;
    
    public:
        Fruit(float x=0, float y=0);
        ~Fruit();
        Vec2 getPos();
        void update();
    private:
        void respawn();
};