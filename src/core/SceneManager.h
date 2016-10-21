#pragma once

#include "Scene.h"

namespace Core {

class SceneManager{
    public:
        SceneManager();
        ~SceneManager();
        void changeScene(Scene* scene);
        Scene* getScene();
    private:
        Scene* currentScene;

};

}
