#pragma once

#include "Data.h"
class Command 
{
private:
	uint8_t Id;
	uint8_t Opcode;
    uint8_t Priority;
    Data _Data;



 public:
	 Command();
	~Command();
	 Command(const Command & command);
	 Command(uint8_t Id,uint8_t Opcode,uint8_t _Priority,Data data);
	 void setPriority(uint8_t priority);
	 uint8_t getPriority();
	 void  SeteData(Data  data);
	 Data getData();
	 bool friend operator <(const Command& lhs, const Command& rhs);
	 void setId(uint8_t id);
	 uint8_t getId();
	 void setOpcode(uint8_t _Opcode);
	 uint8_t getOpcode();
};

