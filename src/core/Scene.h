#pragma once

#include <SDL.h>

namespace Core {

class Scene {
    public:
        virtual void render(SDL_Surface* surface) = 0;
        virtual void update(float dt) = 0;
        virtual void handleEvents(SDL_Event* e) = 0;
};

}
