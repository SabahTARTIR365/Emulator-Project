#pragma once
#include<iostream>
using namespace std;
class Data
{
	private:
	uint8_t Length;
	uint8_t Address;
	uint8_t *Value= new uint8_t[Address];


public:

	Data();
	Data(uint8_t Length, uint8_t Address, uint8_t* Value);
	Data(Data & data);
	~Data();

	void setLength(uint8_t length);
	uint8_t getLength();

	void setAddress(uint8_t address);
	uint8_t getAddress();

	void setValue(uint8_t* Value);
	uint8_t* getValue();



};

