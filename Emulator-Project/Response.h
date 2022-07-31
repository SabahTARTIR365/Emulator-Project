#pragma once
#include<iostream>

enum Status { Succeeded, Failed };
class Response 
{
private:
	uint8_t Id;
	uint8_t Opcode;
	Status _STatus;
public:
	Response();
	void SetStatus(Status status);
	Status getStatus();
	void setId(uint8_t id);
	uint8_t getId();
	void setOpcode(uint8_t _Opcode);
	uint8_t getOpcode();

};

