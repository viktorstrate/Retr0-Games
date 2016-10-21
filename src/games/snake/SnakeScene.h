#pragma once

#include "../../core/Scene.h"
#include "../../core/Engine.h"

#include <SDL.h>

namespace Snake {

class SnakeScene: public Core::Scene {
    public:
        SnakeScene(Core::Engine* engine);
        ~SnakeScene();

        void render(SDL_Surface* surface);
        void update(float dt);
        void handleEvents(SDL_Event* e);
    private:
        Core::Engine* engine;
};

}
