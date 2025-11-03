#include "Fruit.h"
#include "Atlas.h"
Fruit::Fruit()
{
    Vector2 m_pos = Vector2{.x = 1 , .y = 1};
}
uint8_t Fruit::getId() { return Atlas::FRUIT; } 
Vector2 Fruit::getPos() { return m_pos;}

void Fruit::update() {  }