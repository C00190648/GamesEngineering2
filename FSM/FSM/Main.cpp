#include <SDL.h>
#include <SDL_image.h>
#include<iostream>
#include "Animation.h"
#include "Idle.h"
#include "MoveRight.h"

const int WIDTH = 800, HEIGHT = 600;
const int FRAMES = 10;



int main(int argc, char *argv[])
{
	bool quit = false;
	SDL_Event event;
	Animation fsm;

	SDL_Init(SDL_INIT_VIDEO);
	IMG_Init(IMG_INIT_PNG);

	SDL_Window * window = SDL_CreateWindow("SDL2 Sprite Sheets",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH,
		HEIGHT, 0);
	SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);
	SDL_Surface * image = IMG_Load("playerSpriteSheetBlue.png");
	SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer,
		image);


	SDL_SetRenderDrawColor(renderer, 168, 230, 255, 255);
	SDL_RenderClear(renderer);

	bool pressed = false;

	

	while (true)
	{
		fsm.update();
		
		//fsm.moveRight();
		SDL_PollEvent(&event);
		if (pressed == false)
		{
			fsm.idle();
		}
		
		switch (event.type)
		{
		case SDL_QUIT:
			quit = true;
			break;
		case SDL_KEYDOWN:
			switch (event.key.keysym.sym)
			{

			case SDLK_UP:
				fsm.jumping();
				pressed = true;
				break;

			/*case SDLK_LEFT:
				fsm.idle();
				break;*/

			case SDLK_RIGHT:
				fsm.moveRight();
				pressed = true;
				break;
			}

		case !SDL_KEYDOWN:
			pressed = false;
		}
		fsm.render(renderer, texture);
	}

	fsm.draw(image, texture, renderer);
	SDL_DestroyWindow(window);
	IMG_Quit();
	SDL_Quit();

	return 0;
}