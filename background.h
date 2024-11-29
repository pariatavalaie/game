#ifndef map_h
#define map_h
#include "raylib.h"
#include "stdio.h"
extern int map[17][17]
void background() {
    InitWindow(850, 854, "MAP");
    Texture2D background= LoadTexture("C:/Users/ASUS/CLionProjects/untitled3/image.png");
    while (!WindowShouldClose()) {
        BeginDrawing();
        DrawTexture(background,0,0,WHITE);
        EndDrawing();
    }
    CloseWindow();
}
#endif