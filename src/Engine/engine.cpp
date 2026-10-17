#include <raylib.h> // Raylib
#include "engine.hpp" // Header for the cpp
#include "render/render.hpp" // Renderer
#include <chrono> // For Delta Time
auto Variable_Engine_LastTime = std::chrono::steady_clock::now();
int Main() {
    SetConfigFlags(FLAG_WINDOW_MAXIMIZED);
    InitWindow(2560, 1600, "Test");
    while (!WindowShouldClose()) {
        GameLoop();
    }
    return 0;
}
int GameLoop() {
    auto Variable_Engine_CurrentTime = std::chrono::steady_clock::now();
    Variable_Engine_DeltaTime = (std::chrono::duration<float>(Variable_Engine_CurrentTime - Variable_Engine_LastTime)).count();
    Variable_Engine_LastTime = Variable_Engine_CurrentTime;
    Render();
    return 0;
}