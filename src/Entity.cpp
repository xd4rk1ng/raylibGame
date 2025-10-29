#include "Entity.h"

Entity::~Entity()
{
    for(Texture2D* tex : textures)
    {
        UnloadTexture(*tex);
    }
}