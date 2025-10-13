#include <iostream>
#include <stdint.h>

#include <raylib.h>

#include "Game.h"


static const int screenWidth = 800;
static const int screenHeight = 600;


int main(){

    InitWindow(screenWidth, screenHeight, "Raylib Window");
    
    
    SetTargetFPS(60);
    
    Game* snakeGame = new Game();
    //Snake TheSnake();

    while (!WindowShouldClose())
    {
        //snakeGame->update();

        BeginDrawing();
        ClearBackground(RAYWHITE);
        snakeGame->render();  
        //DrawText("Move with arrows!", 10, 10, 20, BLACK);

        DrawFPS(10,40);
        EndDrawing();
    }

    delete snakeGame;

    CloseWindow();


    std::cout << "Hello World" << std::endl;
    return 0;
}