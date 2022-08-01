#include "Factory.h"
#include "DeleteCommand.h"
#include "ReadCommand.h"
#include "WriteCommand.h"
Command* Factory::createCommand(char* type)
{
	cout << "\n inside factory type =" << *type;

	
	if (*type == 'R') //ReadCommand
	{
		return new ReadCommand();
	}
	else if (*type == 'W') //WriteCommand
	{
		
		return new WriteCommand(); 
	}
	else if (*type == 'D')//DeleteCommand
	{
		return new DeleteCommand();
	}
	//else  cout << "unknown Command";
	return nullptr;
}