#pragma once
#include "Command.h"
class WriteCommand :public Command
{
private:
	static uint8_t* Data;// new uint8_t[Length];
public:
	

void setData(uint8_t* value);
uint8_t* getData();


};

