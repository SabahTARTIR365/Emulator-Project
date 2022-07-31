#include "WriteCommand.h"


WriteCommand::WriteCommand()
{
}

WriteCommand::WriteCommand(WriteCommand& writeCommand)
{
	//this->Data = writeCommand.Data;
}
WriteCommand::~WriteCommand()
{
//	delete this->Data;
}

WriteCommand::WriteCommand(uint8_t Id, uint8_t Opcode, uint8_t Priority, Data _Data)
{  
	this->setId(Id);
	this->setOpcode(Opcode);
	this->setPriority(Priority);
	this->SeteData(_Data);
}

