#include "Order.h"

Order::Order()
{
	this->Id = 0x00;
	this->Opcode = 0x00;
}

Order::Order(Order& order)
{
	this->Id = order.Id;
	this->Opcode = order.Opcode;
}

Order::Order(uint8_t Id, uint8_t Opcode)
{
	this->Id = Id;
	this->Opcode = Opcode;
}

Order::~Order()
{
}

void Order::setId(uint8_t id)
{
	this->Id = id;
}

uint8_t Order::getId()
{
	return this->Id;
}

void Order::setOpcode(uint8_t _Opcode)
{
	this->Opcode = _Opcode;
}

uint8_t Order::getOpcode()
{
	return this->Opcode;
}
