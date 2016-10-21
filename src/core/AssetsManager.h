#pragma once

#include <SDL.h>
#include <map>
#include <string>

namespace Core {

class AssetsManager {
    public:
        AssetsManager();
        ~AssetsManager();
        std::map<std::string, SDL_Surface*> surfaces;
};

}
