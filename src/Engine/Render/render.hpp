#ifndef RENDER
#define RENDER
enum Scene {
    ENUM_SCENE_LOGO,
    ENUM_SCENE_GAME,
    ENUM_SCENE_PAUSE
};
inline Scene CurrentScene = ENUM_SCENE_LOGO;
int Render();
void SwitchScene();
#endif