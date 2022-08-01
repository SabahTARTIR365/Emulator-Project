#pragma once
#include<iostream>
#include "Data.h"
#include "Command.h"

enum Status { Succeeded, Failed };
class Response 
{
private:
	Status _STatus;
	Command command;
	

public:
	Response();
	Response(const Response& response);
	void SetStatus(Status status);
	Status getStatus();
	void setCommand(Command command);
	Command getCommand();

};

