#pragma once
#include "Order.h"

enum Status { Succeeded, Failed };
class Response :public Order
{
private:
	Status _STatus;
public:
	void SetStatus(Status status);
	Status getStatus();

};

