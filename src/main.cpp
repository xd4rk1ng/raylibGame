#include <iostream>
#include <raylib.h>

int main(){
    InitWindow(800,600, "Raylib Window");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("Hello, from raylibGame!", 10, 10, 20, BLACK);

        DrawFPS(10,40);
        EndDrawing();
    }
    
    CloseWindow();


    std::cout << "Hello World" << std::endl;
    return 0;
}