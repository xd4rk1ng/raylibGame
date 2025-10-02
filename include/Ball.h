#include <stdint.h>
#include <raylib.h>

class Ball {
    
private:
    Vector2 coords;
    uint32_t radius;
public:
    //Ball();
    Ball(float x, float y, uint32_t r);

    Vector2 getCoords();
    uint32_t getRadius();

    void setCoords(Vector2 vec);
    void moveBy(float x, float y);
    void setRadius(uint32_t radius);
};