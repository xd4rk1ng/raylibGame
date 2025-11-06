#include "Vec2.h"
Vec2::Vec2(float x, float y)
    : coords{x, y}{}

Vec2 Vec2::operator+(const Vec2& other) const
    { return Vec2(coords.x + other.coords.x, coords.y + other.coords.y); }

Vec2 Vec2::operator-(const Vec2& other) const
    { return Vec2(coords.x - other.coords.x, coords.y - other.coords.y); }

Vec2& Vec2::operator+=(const Vec2& other)
{
    coords.x += other.coords.x;
    coords.y += other.coords.y;
    return *this;
}

Vec2& Vec2::operator-=(const Vec2& other)
{
    coords.x -= other.coords.x;
    coords.y -= other.coords.y;
    return *this;
}

bool Vec2::operator==(const Vec2& other) const noexcept
{ return (coords.x == other.coords.x && coords.y == other.coords.y); }