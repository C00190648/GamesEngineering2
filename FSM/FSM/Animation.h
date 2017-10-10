#ifndef ANIMATION_H
#define ANIMATION_H



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
	void moveLeft();


};


#endif // !ANIMATON_H