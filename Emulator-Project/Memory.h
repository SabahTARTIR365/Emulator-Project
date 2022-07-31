#pragma once
#include <iostream>
#include"Data.h"
class Memory//this class singilton + controller too must be singilton 
{
private: 
	     static const int n = 1000;
	     uint8_t* DataArray = new uint8_t[n];
		 Memory(){};
		static  Memory* InstanceMemory;


public: 
	    static Memory* GetInstance();
		void add(Data data);
	    uint8_t* getData(uint8_t Id, uint8_t Length);
};
