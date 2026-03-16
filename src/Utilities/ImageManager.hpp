#pragma once
#include "raylib-cpp/raylib-cpp.hpp"

class ImageManager {
    public:
        inline static Texture2D SpriteSheet;
        inline static Texture2D TieFighter;
        inline static Texture2D TieFighterDamaged;
        inline static Texture2D TieFighterDestroyed;
        inline static Texture2D TieInterceptor;
        inline static Texture2D TieInterceptorDamaged;
        inline static Texture2D TieInterceptorDestroyed;
        inline static Texture2D XWing;

        static void Load() {
            SpriteSheet = LoadTextureFromImage(LoadImage("images/Arcade - Galaga - Miscellaneous - General Sprites.png"));
            TieFighter = LoadTextureFromImage(LoadImage("images/TieFighter.png"));
            TieFighterDamaged = LoadTextureFromImage(LoadImage("images/TieFighterDamaged.png"));
            TieFighterDestroyed = LoadTextureFromImage(LoadImage("images/TieFighterDestroyed.png"));
            TieInterceptor = LoadTextureFromImage(LoadImage("images/TieInterceptor.png"));
            TieInterceptorDamaged = LoadTextureFromImage(LoadImage("images/TieInterceptorDamaged.png"));
            TieInterceptorDestroyed = LoadTextureFromImage(LoadImage("images/TieInterceptorDestroyed.png"));
            XWing = LoadTextureFromImage(LoadImage("images/XWing.png"));
        }

        static void Unload() {
            UnloadTexture(SpriteSheet);
            UnloadTexture(TieFighter);
            UnloadTexture(TieFighterDamaged);
            UnloadTexture(TieFighterDestroyed);
            UnloadTexture(TieInterceptor);
            UnloadTexture(TieInterceptorDamaged);
            UnloadTexture(TieInterceptorDestroyed);
            UnloadTexture(XWing);
        }
};