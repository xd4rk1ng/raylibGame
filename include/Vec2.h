#pragma once
#include <raylib.h>

struct Vec2
{
    Vector2 coords;
    Vec2(float x = 0, float y = 0);

    Vec2 operator+(const Vec2& other) const;
    Vec2 operator-(const Vec2& other) const;
    Vec2& operator+=(const Vec2& other);
    Vec2& operator-=(const Vec2& other);
    bool operator==(const Vec2& other) const noexcept;
};