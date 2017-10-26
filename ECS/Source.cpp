#include <SDL.h>
#include <SDL_image.h>
#include<iostream>


const int WIDTH = 800, HEIGHT = 600;
const int FRAMES = 10;



int main(int argc, char *argv[])
{
	bool quit = false;
	SDL_Event event;


	SDL_Init(SDL_INIT_VIDEO);

	SDL_Window * window = SDL_CreateWindow("SDL2 Sprite Sheets",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH,
		HEIGHT, 0);
	SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);



	SDL_SetRenderDrawColor(renderer, 168, 230, 255, 255);
	SDL_RenderClear(renderer);

	bool pressed = false;



	while (true)
	{
		if (SDL_PollEvent(&event))
		{
			if (SDL_QUIT == event.type)
			{
				break;
			}
		}

	}

	SDL_DestroyWindow(window);
	IMG_Quit();
	SDL_Quit();

	return 0;
}