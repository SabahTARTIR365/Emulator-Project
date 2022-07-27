#include "DataLocatoer.h"

DataLocatoer::DataLocatoer()
{
	this->Length = 0x00;
	this->Address = 0x00;
}

DataLocatoer::DataLocatoer(uint8_t Length, uint8_t Address)
{
	this->Length = Length;
	this->Address = Address;
}

DataLocatoer::DataLocatoer(DataLocatoer& dtaLocatoer)
{
	this->Address = dtaLocatoer.Address;
	this->Length = dtaLocatoer.Length;
}

DataLocatoer::~DataLocatoer()
{
}

void DataLocatoer::setLength(uint8_t length)
{
	this->Length = length;
}

uint8_t DataLocatoer::getLength()
{
	return this->Length;
}

void DataLocatoer::setAddress(uint8_t address)
{
	this->Address = address;
}

uint8_t DataLocatoer::getAddress()
{
	return this->Address;
}
