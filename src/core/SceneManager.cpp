#include "SceneManager.h"
#include "../games/snake/SnakeScene.h"

#include <iostream>

using namespace Core;

SceneManager::SceneManager(){
    currentScene = new Snake::SnakeScene();
}

SceneManager::~SceneManager(){
}

void SceneManager::changeScene(Scene* scene){
}

Scene* SceneManager::getScene(){
    return currentScene;
}
