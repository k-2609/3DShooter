#include "logo.hpp"
#include "raylib.h"
#include "../text.hpp"
int Scene_Logo() {
    RenderText("Test TR", 100, 1, 1, Color{255, 0, 0, 255});
    RenderText("Test BL", 100, 1, 2, Color{255, 0, 0, 255});
    RenderText("Test BR", 100, 1, 3, Color{255, 0, 0, 255});
    RenderText("Test C", 100, 1, 4, Color{255, 0, 0, 255});
    RenderText("Test TL", 100, 1, 0, Color{255, 0, 0, 255});
    return 0;
}