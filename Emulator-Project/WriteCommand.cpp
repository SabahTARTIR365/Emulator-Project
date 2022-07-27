#include "WriteCommand.h"

//uint8_t* WriteCommand::Data;

WriteCommand::WriteCommand()
{
}

WriteCommand::~WriteCommand()
{
}

WriteCommand::WriteCommand(uint8_t* Data)
{
}

void WriteCommand::setData(uint8_t* value)
{
	int length =this->getDataLocatoer().getLength();
	
	this->Data=new uint8_t[length];
	this->Data = value;
	

}

uint8_t* WriteCommand::getData()
{
	return this->Data;
}
