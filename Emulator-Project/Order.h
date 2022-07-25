#include<iostream>
using namespace std;

#pragma once
class Order
{
private: 
	uint8_t Id;
	uint8_t Type;
public:
	void setId(uint8_t id);
	uint8_t getId();
	void setType(uint8_t id);
	uint8_t getType();


};

