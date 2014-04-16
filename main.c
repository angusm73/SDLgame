#include <stdio.h>
#include <SDL2/SDL.h>

int main(int argc, char **argv) {
    SDL_Init(SDL_INIT_EVERYTHING);
    printf("SDL Initialized\n");
    SDL_Quit();
    printf("SDL Shutdown");
    return 0;
}
