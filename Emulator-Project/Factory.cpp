#include "Factory.h"
#include "DeleteCommand.h"
#include "ReadCommand.h"
#include "WriteCommand.h"
Command* Factory::createCommand(char* type)
{

	if (strcmp(type, "R") == 0) //ReadCommand
	{
		return new ReadCommand();
	}
	else if (strcmp(type, "W") == 0) //WriteCommand
	{
		return new WriteCommand();
	}
	else if (strcmp(type, "D") == 0)//DeleteCommand
	{
		return new DeleteCommand();
	}
	return nullptr;
}