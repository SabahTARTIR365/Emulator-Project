#pragma once
#include"Command.h"
#include <queue>


class StorageUnit
{
private:
 std::priority_queue<Command, vector<Command>, std::less<Command>> PriorityQueue;// less give from 1->0
public:

   
    void Add(Command command);
    void Excute();
    void Remove(uint8_t Id);
    void Abort();
    bool isExist(uint8_t Id);
    void swap(priority_queue<Command, vector<Command>, std::less<Command>> SwapedQueue);
    void deleteElementAt(uint8_t Id);



};

