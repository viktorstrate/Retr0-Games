#include "SceneManager.h"
#include "../games/snake/SnakeScene.h"

#include <iostream>

using namespace Core;

SceneManager::SceneManager(Engine* engine){
    this->engine = engine;
    currentScene = new Snake::SnakeScene(engine);
}

SceneManager::~SceneManager(){
}

void SceneManager::changeScene(Scene* scene){
}

Scene* SceneManager::getScene(){
    return currentScene;
}
