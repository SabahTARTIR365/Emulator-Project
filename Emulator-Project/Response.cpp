#include "Response.h"

Response::Response()
{
}

Response::Response(const Response& response)
{
	this->command = response.command;
	this->_STatus = response._STatus;
}

void Response::SetStatus(Status status)
{
	this->_STatus = status;
}

Status Response::getStatus()
{
	return this->_STatus;
}

void Response::setCommand(Command command)
{
	this->command = command;
}

Command Response::getCommand()
{
	return this->command;
}




