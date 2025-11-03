



class Fruit{
    Vector2 m_pos;
    
    public:
        Fruit();
        ~Fruit();
        uint8_t getId();
        Vector2 getPos();
        void update();
    private:
        void respawn();
};