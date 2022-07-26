#include "Command.h"

Command::Command()
{

}

Command::~Command()
{
}

Command::Command(Command& command)
{
	this->Priority = command.Priority;
	this->_DataLocatoer = command._DataLocatoer;
}

Command::Command(uint8_t _Priority, DataLocatoer dataLocatoer)
{
	this->Priority = _Priority;
	this->_DataLocatoer = dataLocatoer;

}

void Command::setPriority(uint8_t priority)
{
	this->Priority = priority;
}

uint8_t Command::getPriority()
{
	return this->Priority;
}

void Command::SeteDataLocatoer(DataLocatoer dataLocatoer)
{
	this->_DataLocatoer = dataLocatoer;
}

DataLocatoer Command::getDataLocatoer()
{
	return this->_DataLocatoer;
}
