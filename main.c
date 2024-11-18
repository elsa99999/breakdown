#include <SDL2/SDL.h>
#include <stdbool.h>

#include "src/game.c"

int main(int argc, char *argv[]) {

    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;

    if (!init(&window, &renderer)) {
        return -1;
    }

    bool running = true;
    SDL_Event event;

    // Boucle de jeu
    while (running) {
        // Gestion des événements
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
            }
        }

        // Rendu du fond d’écran en noir
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        // Mettre à jour la fenêtre
        SDL_RenderPresent(renderer);

        // Limitation de la boucle (par exemple, à 60 FPS)
        SDL_Delay(16);
    }

    // Nettoyage
    cleanup(window, renderer);
    return 0;
}
