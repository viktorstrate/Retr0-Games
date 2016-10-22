#include "Engine.h"
#include "SceneManager.h"

#include <iostream>

using namespace Core;

Engine::Engine(Game* game){
    running = false;
    sceneManager = new SceneManager(this);
    this->game = game;

    lastTickTime = 0;
    deltaTime = 0;
    fps = 0;
}

void Engine::startLoop(){
    SDL_Event e;
    running = true;
    while(running){
        // Poll events, and handle them
        while(SDL_PollEvent(&e)){
            handleEvents(&e);
        }

        // Calculate delta time
        deltaTime = SDL_GetTicks() - lastTickTime;
        lastTickTime = SDL_GetTicks();

        // Calculate fps
        fps = 1/deltaTime*1000;

        update(deltaTime);
        render(game->surface);
    }
}

void Engine::render(SDL_Surface* surface){
    sceneManager->getScene()->render(surface);
    SDL_UpdateWindowSurface(game->window);
}

void Engine::update(float dt){
    sceneManager->getScene()->update(dt);
}

void Engine::handleEvents(SDL_Event* e){
    sceneManager->getScene()->handleEvents(e);

    if(e->type==SDL_QUIT){
        quit();
    }
}

bool Engine::isRunning(){
    return running;
}

void Engine::quit(){
    running = false;
}

Engine::~Engine(){
    delete sceneManager;
}

