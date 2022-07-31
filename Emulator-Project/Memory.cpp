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

uint8_t* Memory::getData(uint8_t Id, uint8_t Length)
{ 
	int i = (int)Id;
	uint8_t* wantedData = new  uint8_t  [(int)Length];

	for (; i < (int)Length; i++)
	{
		wantedData[i]=this->DataArray[i] ;
		
	}
	return  wantedData;
}

void Memory::erase(uint8_t Id, uint8_t Length)
{
	int i = (int)Id;
	
	for (; i < (int)Length; i++)
	{
	 this->DataArray[i]=NULL;
	}

}
