#pragma once
#include "Command.h"
class DeleteCommand : public Command
{
public:
	DeleteCommand();
   ~DeleteCommand();
	DeleteCommand(uint8_t Id, uint8_t Opcode, uint8_t Priority, Data _DataLocatoer);


};

