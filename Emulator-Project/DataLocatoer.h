#pragma once
#include<iostream>
using namespace std;
class DataLocatoer
{
	private:
	uint8_t Length;
	uint8_t Address;

public:

	DataLocatoer();
	DataLocatoer(uint8_t Length, uint8_t Address);
	DataLocatoer(DataLocatoer & dtaLocatoer);
	~DataLocatoer();

	void setLength(uint8_t length);
	uint8_t getLength();

	void setAddress(uint8_t address);
	uint8_t getAddress();


	//uint8_t* Value;// new uint8_t[Length];

	/*void setValue(uint8_t value);
	uint8_t* getValue();*/


};

