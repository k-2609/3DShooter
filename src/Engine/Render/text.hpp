#include "raylib.h"
#include <string>
#include "../engine.hpp"
enum Positions {
    ENUM_POSITION_TOPLEFT,
    ENUM_POSITION_TOPRIGHT,
    ENUM_POSITION_BOTTOMLEFT,
    ENUM_POSITION_BOTTOMRIGHT,
    ENUM_POSITION_CENTER
};
void RenderText(std::string TextToRender, float FontSize, float Spacing, int Position, Color TextColor) {
    Vector2 TextSize = MeasureTextEx(GetFontDefault(), TextToRender.c_str(), FontSize, Spacing);
    float X;
    float Y;
    Positions EnumPosition = static_cast<Positions>(Position);
    switch(EnumPosition){
        case ENUM_POSITION_TOPLEFT:
            X = TextSize.x / 2;
            Y = TextSize.y / 2;
            break;
        case ENUM_POSITION_TOPRIGHT:
            X = Variable_Engine_ScreenResolution.x - TextSize.x / 2;
            Y = TextSize.y / 2;
            break;
        case ENUM_POSITION_BOTTOMLEFT:
            X = TextSize.x / 2;
            Y = Variable_Engine_ScreenResolution.y - TextSize.y;
            break;
        case ENUM_POSITION_BOTTOMRIGHT:
            X = Variable_Engine_ScreenResolution.x - TextSize.x / 2;
            Y = Variable_Engine_ScreenResolution.y - TextSize.y;
            break;
        case ENUM_POSITION_CENTER:
            X = Variable_Engine_ScreenResolution.x / 2;
            Y = Variable_Engine_ScreenResolution.y / 2;
            break;
    };
    DrawTextPro(GetFontDefault(), TextToRender.c_str(), Vector2{X, Y}, Vector2{TextSize.x / 2, TextSize.y / 2}, 0, FontSize, Spacing, TextColor);
}