#include <SDL.h>

const int WIDTH = 800, HEIGHT = 600;

int main(int argc, char *argv[])
{
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Event event;
	SDL_Surface *windowSurface = NULL;

	SDL_Window *window = SDL_CreateWindow("Hello SDL World", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);

	windowSurface = SDL_GetWindowSurface(window);

	while (true)
	{
		if (SDL_PollEvent(&event))
		{
			if (SDL_QUIT == event.type)
			{
				break;
			}
		}
		SDL_UpdateWindowSurface(window);
	}
	SDL_FreeSurface(windowSurface);
	system("pause");
	return 0;
}