#pragma once
#include <memory>
#include <raylib.h>

// we use template here so instance gets initialized with rows and cols
// without having to assign them on creation
// this helps with singleton use
// -- also because i wanted to
class Atlas
{
    static constexpr uint8_t ROWS = 1;
    static constexpr uint8_t COLS = 5;
    
    public:
    static constexpr uint8_t SIDE_LENGHT = 64; 
        enum recId
        {
            BACKGROUND,
            FRUIT,
            SNAKE_HEAD,
            SNAKE_BODY,
            DEFAULT = BACKGROUND
        };
        Rectangle getSrcRectangle(recId id);
        Texture2D getTexture();
        Atlas();
        ~Atlas();
    private:
        const char* m_spritePath = "assets/Game.png";
        Texture2D m_baseTexture;

};