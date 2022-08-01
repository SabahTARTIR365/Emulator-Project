#include "Command.h"

Command::Command()
{
	this->Priority = 0x00;
	//this->_DataLocatoer
}

Command::~Command()
{
}

Command::Command( const Command& command)
{
	Priority = command.Priority;
	_Data = command._Data;
	Opcode = command.Opcode;
	Id = command.Id;
}

Command::Command(uint8_t Id,uint8_t Opcode, uint8_t _Priority, Data data)
{
	this->Id = Id;
	this->Opcode = Opcode;
	this->Priority = _Priority;
	this->_Data = data;

}

void Command::setPriority(uint8_t priority)
{
	this->Priority = priority;
}

uint8_t Command::getPriority()
{
	return this->Priority;
}

void Command::SeteData(Data data)
{
	this->_Data = data;
}

Data Command::getData()
{
	return this->_Data;
}

bool operator <(const Command& lhs, const Command& rhs)
{
	return lhs.Priority < rhs.Priority;
}

void Command::setId(uint8_t id)
{
	this->Id = id;
}

uint8_t Command::getId()
{
	return this->Id;
}

void Command::setOpcode(uint8_t _Opcode)
{
	this->Opcode = _Opcode;
}

uint8_t Command::getOpcode()
{
	return this->Opcode;
}