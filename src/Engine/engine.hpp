#ifndef ENGINE
#define ENGINE
#include "raylib.h"
int Main();
int GameLoop();
inline Vector2 Variable_Engine_MousePosition = {0, 0};
inline Vector2 Variable_Engine_ScreenResolution = {2560, 1600};
inline float Variable_Engine_DeltaTime = 0;

#endif