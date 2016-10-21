#include "core/Engine.h"
#include "Game.h"

#include <SDL.h>
#include <iostream>

#define WIDTH 1080
#define HEIGHT 720

int main(int argc, char * args[]){

    Game game(WIDTH, HEIGHT);

    if(!game.success){
        return 1;
    }

    Core::Engine engine(&game);
    engine.startLoop();

    return 0;
}


