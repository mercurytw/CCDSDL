//
// Created by neko on 5/3/17.
//

#include <iostream>
#include "ColliderApp.h"

int ColliderApp::OnExecute() {
    if(!OnInit()) {
        return -1;
    }

    SDL_Event Event;

    while(is_running) {
        while(SDL_PollEvent(&Event)) {
            OnEvent(&Event);
        }

        OnLoop();
        OnRender();
    }

    OnCleanup();

    return 0;
}

bool ColliderApp::OnInit() {
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        return false;
    }

    root_surface = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);

    return root_surface != nullptr;
}

void ColliderApp::OnEvent(SDL_Event* Event) {
    if(SDL_QUIT == Event->type) {
        is_running = false;
    }
    else if (SDL_KEYUP == Event->type) {
        switch (Event->key.keysym.sym) {
            case SDLK_q:
                is_running = false;
                break;
            default:
                break;
        }
    }
}

void ColliderApp::OnCleanup() {
    std::cout << "kbai" << std::endl;
    SDL_Quit();
}

//========================================================
//
//========================================================

int main(int argc, char* argv[]) {
    ColliderApp theApp;

    return theApp.OnExecute();
}