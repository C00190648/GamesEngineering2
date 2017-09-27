#include <iostream>
#include <SDL.h>

class Command
{
public:
	virtual ~Command() {}
	virtual void execute() = 0;
protected:
	Command() {}
};


void jump()
{
	std::cout << "jumping" << std::endl;
}
void fireGun()
{
	std::cout << "firing" << std::endl;
}

void left()
{
	std::cout << "moving left" << std::endl;
}

void right()
{
	std::cout << "moving right" << std::endl;
}