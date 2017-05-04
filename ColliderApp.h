//
// Created by neko on 5/3/17.
//

#ifndef SDL_COLLIDER_COLLIDERAPP_H
#define SDL_COLLIDER_COLLIDERAPP_H

#include <SDL/SDL.h>

class ColliderApp {
private:
    bool is_running;
    SDL_Surface*    root_surface;

public:
    ColliderApp() :
            is_running(true),
            root_surface(nullptr)
    {};

    int OnExecute();

    bool OnInit();

    void OnEvent(SDL_Event* Event);

    void OnLoop() {};

    void OnRender() {};

    void OnCleanup();

};


#endif //SDL_COLLIDER_COLLIDERAPP_H
