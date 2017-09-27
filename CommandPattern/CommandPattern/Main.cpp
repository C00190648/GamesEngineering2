#include "InputHandler.h"



const int WIDTH = 800, HEIGHT = 600;

int main(int argc, char *argv[])
{
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Event event;
	SDL_Surface *windowSurface = NULL;

	SDL_Window *window = SDL_CreateWindow("Hello SDL World", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);

	windowSurface = SDL_GetWindowSurface(window);
	InputHandler input;

	while (SDL_PollEvent(&event) != 0)
	{
		if (SDL_PollEvent(&event))
		{
			if (SDL_QUIT == event.type)
			{
				break;
			}
		}
		input.handleInput();
		SDL_UpdateWindowSurface(window);
	}
	SDL_FreeSurface(windowSurface);

	SDL_DestroyWindow(window);
	
	SDL_Quit();

	return EXIT_SUCCESS;
}