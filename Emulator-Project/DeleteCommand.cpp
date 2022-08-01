#include "DeleteCommand.h"

DeleteCommand::DeleteCommand()
{
}

DeleteCommand::~DeleteCommand()
{
}

DeleteCommand::DeleteCommand(uint8_t Id, uint8_t Opcode, uint8_t Priority, Data _DataLocatoer)
{
	this->setId(Id);
	this->setOpcode(Opcode);
	this->setPriority(Priority);
	this->SeteData(_DataLocatoer);
}
