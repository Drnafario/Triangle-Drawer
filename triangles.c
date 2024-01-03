#include"raylib.h"
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"graphic.h"

int main() {
    InitWindow(800, 500, "HI");
    SetTargetFPS(60);

    while(!WindowShouldClose()) {
        BeginDrawing();
        
        ClearBackground(RAYWHITE);
        char pos[256];
        sprintf(pos, "X: %d Y: %d", GetMouseX(), GetMouseY() + 100);
        DrawText(pos, 0, 100, 20, BLACK);
        DrawFPS(0, 120);
        for(int i = 0; i < 20; i++) {
            int x1 = (rand() % (500 - 0 + 1)) + 0;
            int y1 = (rand() % (500 - 100 + 1)) + 100; 
            int x2 = (rand() % (500 - 0 + 1)) + 0; 
            int y2 = (rand() % (500 - 100 + 1)) + 100; 
            int x3 = (rand() % (500 - 0 + 1)) + 0; 
            int y3 = (rand() % (500 - 100 + 1)) + 100; 
            wireTriangle(x1, y1, x2, y2, x3, y3);
        }

        EndDrawing();
    }

    CloseWindow();

    return 0;
}