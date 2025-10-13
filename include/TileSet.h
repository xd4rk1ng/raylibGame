#pragma once

#include <raylib.h>
#include <string>
#include <vector>
class TileSet{
    private:
        const char* m_textureFile;
        Texture2D m_atlasTexture;
        int m_tilesPerRow, m_tilesPerColumn;
    public:
        struct Tile{
            int height;
            int width;
        };const Tile  m_tile;

    public:
        TileSet(int tileSize);
        ~TileSet();

        Texture2D getAtlasTexture();
        Rectangle getRectangle(int id);

};