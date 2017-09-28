#include "Command.h"


class InputHandler
{
public:
	void handleInput();

	void init();
private:
	Command* buttonX_;
	Command* buttonY_;
	Command* buttonA_;
	Command* buttonB_;
};

