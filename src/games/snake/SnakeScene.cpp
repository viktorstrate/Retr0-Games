#include "SnakeScene.h"

#include <SDL.h>
#include <iostream>

using namespace Snake;

SnakeScene::SnakeScene(Core::Engine* engine){
    this->engine = engine;
    snakeImage = SDL_LoadBMP("assets/snake.bmp");
    if(snakeImage!=NULL){
        std::cout << "Snake image loaded" << std::endl;
    }
}

void SnakeScene::render(SDL_Surface* surface){
    SDL_BlitSurface(snakeImage, NULL, surface, NULL);
}

void SnakeScene::update(float dt){

}

void SnakeScene::handleEvents(SDL_Event* e){

}

SnakeScene::~SnakeScene(){
}
