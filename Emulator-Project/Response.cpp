#include "Response.h"

void Response::setId(uint8_t id)
{
	this->Id = id;
}

uint8_t Response::getId()
{
	return this->Id;
}

void Response::setOpcode(uint8_t _Opcode)
{
	this->Opcode = _Opcode;
}

uint8_t Response::getOpcode()
{
	return this->Opcode;
}
