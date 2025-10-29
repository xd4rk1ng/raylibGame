#pragma once

#include <raylib.h>
#include <array>
#include "Game.h"

class Entity
{   // TODO: implement on child classes
    protected:
        Vector2 m_position;
        // reutilize Texture2d's, ex.: textures = [&texture1, &texture2, NULL]
        std::array<Rectangle*, Game::MAX_NO_TEXTURES> m_srcRectangle; 

    public:
        Entity();
        // initialize Entity by giving position and an array of textures for it to use
        Entity(Vector2 position, std::array<Rectangle*, Game::MAX_NO_TEXTURES> srcRectangle) 
            : m_position(position), m_srcRectangle(srcRectangle) {};

        virtual void update() = 0;
        virtual void draw() = 0;

        virtual ~Entity();
};