#pragma once
#include "Command.h"
class WriteCommand :public Command
{
private:
	 uint8_t* Data;// new uint8_t[Length];
public:
	WriteCommand();
   ~WriteCommand();
    WriteCommand(uint8_t* Data);

void setData(uint8_t* value);
uint8_t* getData();
//----------here ------------

};

