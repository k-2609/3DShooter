#include "render.hpp"
#include "raylib.h"
#include "scenes/logo.hpp"
void SwitchScene(int i) {
    CurrentScene = static_cast<Scene>(i);
}
int Render() {
    // Render 3D First, Then 2D
    BeginDrawing();
    ClearBackground(RAYWHITE);

    switch(CurrentScene) {
        case ENUM_SCENE_LOGO: {
           Scene_Logo();
            break;
        }
    }
    
    EndDrawing();
    return 0;
}