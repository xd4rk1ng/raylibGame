#include <stdint.h>
#include <raylib.h>

typedef struct Vector2C{
    unsigned char x, y;
};


class Snake {
    
private:
    unsigned char size; // length span of snake: 0 - 255 body parts (16x16 pxl = 256 positions)
    
    struct bodyPart
    {
        Image texture /* = "SNAKE_HEAD_PATH"*/;
        Vector2C coords;
        enum rotation{UP, RIGHT, LEFT, DOWN};
    } body[256];
    enum 

    public:
        Snake();
        void expandSnake();
        
        void update();
        void draw();
    private:
        void loadHead();
        void loadBody()
        
};