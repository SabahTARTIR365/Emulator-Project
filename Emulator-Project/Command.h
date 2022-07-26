#pragma once
#include "Order.h"
class Command :
    public Order
{
private:
    uint8_t Priority;

 public:
	 Command();
	 Command(Command & command);
	 void setPriority(uint8_t priority);
	 uint8_t getPriority();
};

