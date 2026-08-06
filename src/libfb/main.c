#include <SDL3/SDL.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("Hello SDL.");

    // initialize library.
    SDL_Init(SDL_INIT_VIDEO);

    return EXIT_SUCCESS;
}

