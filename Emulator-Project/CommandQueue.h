#pragma once
#include"Command.h"
#include <queue>


class CommandQueue
{
private:
 static std::priority_queue<Command> PriorityQueue;// less give from 1->0
public:

   
    void Add(Command command);
    void Excute();
    void Remove(uint8_t Id);
    void Abort();
    bool isExist(uint8_t Id);
    void swap(priority_queue<Command> SwapedQueue);
    void deleteElementAt(uint8_t Id);



};

