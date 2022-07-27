#pragma once
#include "Order.h"
#include "DataLocatoer.h"
class Command :public Order
{
private:
    uint8_t Priority;
   DataLocatoer _DataLocatoer;


 public:
	 Command();
	~Command();
	 Command(Command & command);
	 Command(uint8_t _Priority,DataLocatoer dataLocatoer);
	 void setPriority(uint8_t priority);
	 uint8_t getPriority();
	 void  SeteDataLocatoer(DataLocatoer  dataLocatoer);
	 DataLocatoer getDataLocatoer();
	 bool friend operator <(const Command& lhs, const Command& rhs);
};

