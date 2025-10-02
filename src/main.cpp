#include <iostream>
#include <stdint.h>
#include <raylib.h>

#include "Ball.h"

int main(){
    uint32_t screenWidth = 800;
    uint32_t screenHeight = 800;

    InitWindow(screenWidth, screenHeight, "Raylib Window");
    
    uint32_t ballsize = 50;
    Ball myBall((float)screenWidth/2, (float)screenHeight/2, ballsize);

    SetTargetFPS(60);


    while (!WindowShouldClose())
    {
        if(IsKeyDown(KEY_RIGHT)) myBall.moveBy(2.0f, 0.0f);
        if(IsKeyDown(KEY_DOWN)) myBall.moveBy(0.0f, 2.0f);
        if(IsKeyDown(KEY_LEFT)) myBall.moveBy(-2.0f, 0.0f);
        if(IsKeyDown(KEY_UP)) myBall.moveBy(0.0f, -2.0f);
        


        BeginDrawing();
            ClearBackground(RAYWHITE);
        
            DrawCircleV(myBall.getCoords(), myBall.getRadius(), MAROON);
            DrawText("Hello, from raylibGame!", 10, 10, 20, BLACK);

            DrawFPS(10,40);
        EndDrawing();
    }
    
    CloseWindow();


    std::cout << "Hello World" << std::endl;
    return 0;
}