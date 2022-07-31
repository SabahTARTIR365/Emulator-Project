#include "CommandFactory.h"
#pragma once
class Factory: CommandFactory
{

private:
	//Factory();
public:
	Command* createCommand(char* type);


};

