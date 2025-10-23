#include <stdlib.h>

#include <SDL3/SDL.h>

int main(int argc, const char *argv[]) {
    if (!SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS)) {
        SDL_LogError(SDL_LOG_CATEGORY_ERROR, "SDL_Init failed: %s\n", SDL_GetError());
        return EXIT_FAILURE;
    }

    SDL_Quit();

    return EXIT_SUCCESS;
}