#pragma once
#include"Command.h"
#include <queue>
#include "Memory.h"
#include "Response.h"

class CommandQueue
{
private:
 static std::priority_queue<Command> PriorityQueue;// less give from 1->0
  Memory* memory= Memory::GetInstance();
 static bool isExcute;

public:
    void Add(Command command);
    void Excute();
    void Remove(uint8_t Id);
    void Abort();
    bool isExist(uint8_t Id);
    void swap(priority_queue<Command> SwapedQueue);
    void deleteElementAt(uint8_t Id);
  
    void printResponse(Response response);

};

