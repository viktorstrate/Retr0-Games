#include "SnakeScene.h"

#include <SDL.h>
#include <iostream>

using namespace Snake;

SnakeScene::SnakeScene(Core::Engine* engine){
    this->engine = engine;
}

void SnakeScene::render(SDL_Surface* surface){
}

void SnakeScene::update(float dt){

}

void SnakeScene::handleEvents(SDL_Event* e){

}

SnakeScene::~SnakeScene(){
}
