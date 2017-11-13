#include <SDL.h>
#include <SDL_image.h>
#include<iostream>
#include "Entity.h"
#include "HealthComponent.h"
#include "AIsystem.h"
#include "PositionComponent.h"
#include "RenderSystem.h"
#include "ControlSystem.h"
#include "ControlComponent.h"


const int WIDTH = 800, HEIGHT = 600;
const int FRAMES = 10;



int main(int argc, char *argv[])
{
	bool quit = false;
	SDL_Event event;


	SDL_Init(SDL_INIT_VIDEO);

	SDL_Window * window = SDL_CreateWindow("",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH,
		HEIGHT, 0);
	SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);



	SDL_SetRenderDrawColor(renderer, 168, 230, 255, 255);
	SDL_RenderClear(renderer);

	bool pressed = false;

	Entity player;
	Entity alien;
	Entity dog;
	Entity cat;

	HealthComponent hc;
	PositionComponent pc;
	ControlComponent cc;
	

	player.addComponent(hc);
	player.addComponent(pc);
	player.addComponent(cc);

	alien.addComponent(hc);
	alien.addComponent(hc);

	dog.addComponent(hc);
	dog.addComponent(pc);

	cat.addComponent(hc);
	cat.addComponent(pc);

	
	AISystem as;
	ControlSystem cs;
	RenderSystem rs;

	as.addEntity(player);
	as.addEntity(alien);
	as.addEntity(dog);
	as.addEntity(cat);

	cs.addEntity(player);

	rs.addEntity(player);
	rs.addEntity(alien);
	rs.addEntity(dog);
	rs.addEntity(cat);
	

	while (true)
	{
		if (SDL_PollEvent(&event))
		{
			if (SDL_QUIT == event.type)
			{
				break;
			}
		}
		as.update();
		cs.update();
	}

	SDL_DestroyWindow(window);
	IMG_Quit();
	SDL_Quit();

	return 0;
}