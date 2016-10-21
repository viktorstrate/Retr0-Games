#pragma once

#include "Scene.h"

namespace Core {

// Forward declare engine for co dependency
class Engine;

class SceneManager{
    public:
        SceneManager(Engine* engine);
        ~SceneManager();
        void changeScene(Scene* scene);
        Scene* getScene();
    private:
        Scene* currentScene;
        Engine* engine;

};

}
