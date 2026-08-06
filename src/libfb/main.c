#include <SDL3/SDL.h>
#include <stdio.h>
#include <stdlib.h>

#define WIDTH 320
#define HEIGHT 200

int main(void) {
    printf("Hello SDL.");

    // initialize library.
    SDL_Init(SDL_INIT_VIDEO);

    return EXIT_SUCCESS;
}

