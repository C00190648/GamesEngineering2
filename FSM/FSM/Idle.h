#include "State.h"


class Idle : public State
{
public:
	Idle();
	~Idle();
	void jumping(Animation*a);
};
