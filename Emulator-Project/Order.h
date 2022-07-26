#include<iostream>
using namespace std;

#pragma once
class Order
{
private: 
	uint8_t Id;
	uint8_t Opcode;
public:
	Order();
	Order(Order& order);
	Order(uint8_t Id,uint8_t Opcode);
	~Order();
	void setId(uint8_t id);
	uint8_t getId();
	void setOpcode(uint8_t _Opcode);
	uint8_t getOpcode();


};

