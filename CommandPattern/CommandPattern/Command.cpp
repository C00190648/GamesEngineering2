#include "Command.h"


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


class JumpCommand : public Command
{
public:
	virtual void execute() { std::cout << "press" << std::endl; }
};

class FireCommand : public Command
{
public:
	virtual void execute() { fireGun(); }
};


class MoveLeft : public Command
{
public:
	virtual void execute() { left(); }
};


class MoveRight : public Command
{
public:
	virtual void execute() { right(); }
};


