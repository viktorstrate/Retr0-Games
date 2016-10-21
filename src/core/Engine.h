#pragma once

#include "SceneManager.h"
#include "AssetsManager.h"
#include "../Game.h"

#include <SDL.h>

namespace Core{

class Engine {
    public:
        Engine(Game* game);
        ~Engine();

        void update(float dt);
        void render(SDL_Surface* surface);
        void handleEvents(SDL_Event* e);

        bool isRunning();
        void quit();
        void startLoop();

        AssetsManager* assets;

    private:
        SceneManager* sceneManager;
        Game* game;
        bool running;
        double lastTickTime;
        double deltaTime;
        double fps;
};

}
