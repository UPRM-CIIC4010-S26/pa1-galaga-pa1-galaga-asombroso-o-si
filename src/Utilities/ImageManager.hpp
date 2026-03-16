#pragma once
#include "raylib-cpp/raylib-cpp.hpp"

class ImageManager {
    public:
        inline static Texture2D SpriteSheet;
        inline static Texture2D TieFighter;
        inline static Texture2D XWing;

        static void Load() {
            SpriteSheet = LoadTextureFromImage(LoadImage("images/Arcade - Galaga - Miscellaneous - General Sprites.png"));
            TieFighter = LoadTextureFromImage(LoadImage("images/TieFighter.png"));
            XWing = LoadTextureFromImage(LoadImage("images/XWing.png"));
        }

        static void Unload() {
            UnloadTexture(SpriteSheet);
            UnloadTexture(TieFighter);
            UnloadTexture(XWing);
        }
};