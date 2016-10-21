#include "Game.h"
#include <iostream>

#define GAME_TITLE "Retr0"


Game::Game(int w, int h){
    width = w;
    height = h;

    // Setup and verify SDL
    if(!setup()){
        std::cout << "SDL Initialization failed" << std::endl;
        success = false;
    } else {
        std::cout << "SDL Initialization succeeded" << std::endl;
        success = true;
    }
}

Game::~Game(){
    SDL_DestroyWindow(window);
    SDL_Quit();
}

bool Game::setup(){
    if(SDL_Init(SDL_INIT_VIDEO) < 0){
        std::cout << "SDL Init: failed" << std::endl << SDL_GetError() << std::endl;
        return false;
    }

    window = SDL_CreateWindow(GAME_TITLE, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);
    if(window == NULL){
        std::cout << "SDL Create Window: failed" << std::endl << SDL_GetError() << std::endl;
        return false;
    }

    surface = SDL_GetWindowSurface(window);

    return true;
}
