#include "Memory.h"
Memory* Memory::InstanceMemory = 0;

Memory* Memory::GetInstance()
{
	return (!InstanceMemory) ?
		InstanceMemory = new Memory() :
		InstanceMemory;
}

void Memory::add(Data data)
{
	//if data siz == n // create new one with new size;
	int i =(int) data.getAddress();
	uint8_t* p = data.getValue();
	for (; i < (int)data.getLength(); i++)
	{
		this->DataArray[i] = *p;
		p++;
	}

}

uint8_t* Memory::getData(uint8_t Address, uint8_t Length)
{ 
	int statingAddress = (int)Address;
	uint8_t* wantedData = new  uint8_t  [(int)Length];
	int length = (int)Length;
	if (statingAddress < n)
	{ 
		while(length>0)
	
		{
		  //we need to copy data to new array with bigger size
			if (statingAddress>=n)this->resizeDataArray();
		    wantedData[statingAddress] = this->DataArray[statingAddress]; 
			statingAddress++;
			length--;
		}
	}
	return  wantedData;
}

void Memory::erase(uint8_t Address, uint8_t Length)
{
	int i = (int)Address;
	
	for (; i < (int)Length; i++)
	{
	 this->DataArray[i]=NULL;
	}

}

void Memory::resizeDataArray()
{
 uint8_t* tmp = this->DataArray;
 this->DataArray= new uint8_t[n*2]{};
 int i = 0;
 for (i = 0; i < n; i++)
 {
	 DataArray[i] = tmp[i];
 }
}
