#include "TileSet.h"
TileSet::TileSet(int tileSize)
        : m_tile{tileSize,tileSize}
        , m_textureFile("assets/Game.png")
{
    m_atlasTexture = LoadTexture(m_textureFile);
    
    m_tilesPerColumn = m_atlasTexture.height / m_tile.height;
    m_tilesPerRow = m_atlasTexture.width / m_tile.width;
}

TileSet::~TileSet()
{
    UnloadTexture(m_atlasTexture);
}

Texture2D TileSet::getAtlasTexture()
{
    return m_atlasTexture;
}

Rectangle TileSet::getRectangle(int id)
{
    // To find the row/column of the tile in VRAM
    int column = id % m_tilesPerRow;
    int row = id / m_tilesPerRow;
    Rectangle sourceRectangle = {
        .x = column * m_tile.width,
        .y = row * m_tile.height,
        .width = m_tile.width,
        .height = m_tile.height
    };
    return sourceRectangle;
}