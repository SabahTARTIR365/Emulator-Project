#include "Data.h"

Data::Data()
{
	//this->Length = 0x00;
	//this->Address = 0x00;
}

Data::Data(uint8_t Length, uint8_t Address, uint8_t* Value)
{
	this->Length = Length;
	this->Address = Address;
	this->Value = new  uint8_t[Length];
	this->Value = Value;
}

Data::Data(const Data& data)
{
	this->Address = data.Address;
	this->Length = data.Length;
	this->Value = data.Value;
 
}

Data::~Data()
{
	//delete Value;
}

void Data::setLength(uint8_t length)
{
	this->Length = length;
}

uint8_t Data::getLength()
{
	return this->Length;
}

void Data::setAddress(uint8_t address)
{
	this->Address = address;
}

uint8_t Data::getAddress()
{
	return this->Address;
}

void Data::setValue(uint8_t* Value)
{
	this->Value = Value;
}

uint8_t* Data::getValue()
{
	return this->Value;
}
