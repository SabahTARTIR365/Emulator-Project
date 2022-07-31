#include "ReadCommand.h"

ReadCommand::ReadCommand()
{
	
}

ReadCommand::ReadCommand(ReadCommand& readCommand)
{
	
}

ReadCommand::ReadCommand(uint8_t Id, uint8_t Opcode, uint8_t Priority, Data _Data)
{

	this->setId(Id);
	this->setOpcode(Opcode);
	this->setPriority(Priority);
	this->SeteData(_Data);
}
