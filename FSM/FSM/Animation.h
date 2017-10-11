#ifndef ANIMATION_H
#define ANIMATION_H

#include <SDL.h>


class Animation
{

	class State* current;

public:
	Animation();
	~Animation();
	void setCurrent(State *s) { current = s; }
	void idle();
	void jumping();
	void moveRight();
	void render(SDL_Renderer* renderer, SDL_Texture * texture);
	void draw(SDL_Surface * image, SDL_Texture * texture, SDL_Renderer* renderer);
	void moveLeft();
	void update();
	double frames;
	Uint32 ticks;
		Uint32 sprite;
	SDL_Rect srcrect;
	SDL_Rect dstrect;


};


#endif // !ANIMATON_H