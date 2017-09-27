#include "Command.h"



class JumpCommand : public Command
{
public:
	virtual void execute() { jump(); }
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


