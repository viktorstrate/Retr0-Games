#pragma once

#include "../../core/Scene.h"

#include <SDL.h>

namespace Snake {

class SnakeScene: public Core::Scene {
    public:
        SnakeScene();
        ~SnakeScene();

        void render(SDL_Surface* surface);
        void update(float dt);
        void handleEvents(SDL_Event* e);
};

}
