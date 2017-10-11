#include "Animation.h"
#include "Idle.h"
#include "MoveRight.h"

Animation::Animation()
{
	current = new Idle();
	dstrect = { 10,10,260,260 };
}

Animation::~Animation()
{

}

void Animation::idle()
{
	current->idle(this);
}

void Animation::jumping()
{
	current->jumping(this);
}

void Animation::moveLeft()
{
	current->moveLeft(this);
}

void Animation::moveRight()
{
	current->moveRight(this);
}

void Animation::render(SDL_Renderer* renderer, SDL_Texture * texture)
{
	SDL_RenderClear(renderer);
	SDL_RenderCopy(renderer, texture, &srcrect, &dstrect);
	SDL_RenderPresent(renderer);
}

void Animation::draw(SDL_Surface * image, SDL_Texture * texture, SDL_Renderer* renderer)
{
	SDL_DestroyTexture(texture);
	SDL_FreeSurface(image);
	SDL_DestroyRenderer(renderer);
}

void Animation::update()
{
	 ticks = SDL_GetTicks();
	 sprite = (ticks / 100) % 8;
}