#pragma once
#include "Command.h"
class WriteCommand :public Command
{
private:
	
public:
	WriteCommand();
	WriteCommand(WriteCommand & writeCommand);
   ~WriteCommand();
    WriteCommand(uint8_t Id, uint8_t Opcode, uint8_t Priority,Data _Data);


};

