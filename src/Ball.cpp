#include "Ball.h"

Ball::Ball(float x, float y, uint32_t r)
{
    this->coords.x = x;
    this->coords.y = y;
    this->radius = r;
}

Vector2 Ball::getCoords()
{
    return this->coords;
}

uint32_t Ball::getRadius()
{
    return this->radius;
}

void Ball::setCoords(Vector2 vec)
{
    this->coords=vec;
}

void Ball::moveBy(float x, float y)
{
    this->coords.x += x;
    this->coords.y += y;
}

void Ball::setRadius(uint32_t radius)
{
    this->radius=radius;
}