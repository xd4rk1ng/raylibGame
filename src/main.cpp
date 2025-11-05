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

    Vec2 v1 = Vec2(1, 2);
    Vec2 v2 = Vec2(1, 2);
    Vec2 vR = v1 + v2;
    if(v1 == v2)
        std::cout << "\n" << "[DEBUG]: v1 == v2" << "\n";
    
    Game& snakeGame = *Game::getInstance();
    while (!WindowShouldClose())
    {
        snakeGame.update();
        BeginDrawing();
        ClearBackground(RAYWHITE);
        
        snakeGame.draw();
        DrawFPS(10,40);
        
        EndDrawing();
    }
    CloseWindow();

    std::cout << "Hello Console!" << std::endl;
    return 0;
}