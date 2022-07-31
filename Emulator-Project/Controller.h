#pragma once
#include "Command.h"
#include "CommandQueue.h"
class Controller
{
private:


	Controller() {};
	static  Controller* InstanceController;
	CommandQueue commandQueue;


public:
	static Controller* GetInstance();

	void addCommand(uint8_t Array2D[][3]);
	
	
};

