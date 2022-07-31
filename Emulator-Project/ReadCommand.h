#pragma once
#include "Command.h"
class ReadCommand : public Command
{
public:
	ReadCommand();
	ReadCommand(ReadCommand& readCommand);
	ReadCommand(uint8_t Id, uint8_t Opcode, uint8_t Priority, Data _Data);

};


