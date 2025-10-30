#include <iostream>
#include <memory>
#include <stdint.h>
#include <raylib.h>
#include "Game.h"

static constexpr int screenWidth = 800;
static constexpr int screenHeight = 600;

int main(){

    InitWindow(screenWidth, screenHeight, "Raylib Window");
    SetTargetFPS(60);
    
    std::unique_ptr<Game> snakeGame = std::move(Game::getInstance());
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        snakeGame->update();
        
        snakeGame->draw();
        DrawFPS(10,40);
        EndDrawing();
    }
    CloseWindow();

    std::cout << "Hello Console!" << std::endl;
    return 0;
}