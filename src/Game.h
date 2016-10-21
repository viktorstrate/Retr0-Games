#pragma once
#include <SDL.h>

class Game{
    public:
        Game(int width, int height);
        ~Game();
        bool success;
        SDL_Window* window;
        SDL_Surface* surface;
    private:
        bool setup();
        int width;
        int height;
};
