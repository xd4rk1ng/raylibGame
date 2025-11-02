#include <iostream>
#include <memory>
#include <stdint.h>
#include <raylib.h>

static constexpr int SCREENWIDTH = 800;
static constexpr int SCREENHEIGHT = 600;
#include "Game.h"

int main(){

    InitWindow(SCREENWIDTH, SCREENHEIGHT, "Raylib Window");
    SetTargetFPS(60);
    
    std::unique_ptr<Game> snakeGame = std::move(Game::getInstance());
    while (!WindowShouldClose())
    {
        snakeGame->update();
        BeginDrawing();
        ClearBackground(RAYWHITE);
        
        snakeGame->draw();
        DrawFPS(10,40);
        
        EndDrawing();
    }
    CloseWindow();

    std::cout << "Hello Console!" << std::endl;
    return 0;
}