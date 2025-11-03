#include <raylib.h>

struct Vec2
{
    Vector2 coords;
    Vec2();
    Vec2(float x, float y);

    Vec2 operator+(const Vec2& other) const;
    Vec2 operator-(const Vec2& other) const;
    Vec2& operator+=(const Vec2& other);
    Vec2& operator-=(const Vec2& other);
    bool operator==(const Vec2& other) const noexcept;
};