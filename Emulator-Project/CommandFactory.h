#include "Command.h"
#pragma once
class CommandFactory
{

public:
	virtual Command* createCommand(char* type) = 0;

};

