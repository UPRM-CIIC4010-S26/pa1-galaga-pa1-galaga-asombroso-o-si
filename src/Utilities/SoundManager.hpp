#pragma once
#include "raylib-cpp/raylib-cpp.hpp"

class SoundManager {
    public:
    static inline Sound attack;
    static inline Sound dead;
    static inline Sound gameOver;
    static inline Sound hit;
    static inline Sound shoot;
    static inline Sound enemyFighters;
    static inline Sound playerShooting;
    static inline Music menuMusic;
    static inline Music gameplayMusic;
    static inline Music pauseMusic;
    bool menuMusicPlaying = false;
    
    static void Load() {
        attack = LoadSound("audio/attack.mp3");
        dead = LoadSound("audio/dead.mp3");
        gameOver = LoadSound("audio/gameOver.mp3");
        hit = LoadSound("audio/hit.mp3");
        shoot = LoadSound("audio/shoot.mp3");
        enemyFighters = LoadSound("audio/TieFighterBlast.mp3");
        playerShooting = LoadSound("audio/XWingBlast.mp3");
        menuMusic = LoadMusicStream("audio/GatewayGalaxy.mp3");
        gameplayMusic = LoadMusicStream("audio/GatewayGalaxy.mp3");
        pauseMusic = LoadMusicStream("audio/GatewayGalaxy.mp3");
    }

    static void Unload() {
        UnloadSound(attack);
        UnloadSound(dead);
        UnloadSound(gameOver);
        UnloadSound(hit);
        UnloadSound(shoot);
    }
};