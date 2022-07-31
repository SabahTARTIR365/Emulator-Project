#include "CommandQueue.h"
using namespace std;
#include"Command.h"
#include <queue>
 std::priority_queue<Command>  CommandQueue:: PriorityQueue;
void CommandQueue::Add(Command command)
{
	cout << "inside add";
	this->PriorityQueue.push(command);
}

void CommandQueue::Excute()
{

}

void CommandQueue::Remove(uint8_t Id)
{



		if (this->isExist(Id))
		{
			this->deleteElementAt(Id);
		}
		else cout << " Id is not exist";
}

void CommandQueue::Abort()
{
}

bool CommandQueue::isExist(uint8_t Id)
{
	 //copy the original queue to the temporary queue
	std::priority_queue<Command, vector<Command>, std::less<Command>> TemporaryQueue= this->PriorityQueue;
	Command currentCommand;


	while (!TemporaryQueue.empty())
	{
		currentCommand = TemporaryQueue.top();
		if (Id == currentCommand.getId())return true;
		TemporaryQueue.pop();
	}
	cout << "The id is not exist \n";
	return false;
}

void CommandQueue::swap(priority_queue<Command, vector<Command>, std::less<Command>> SwapedQueue)
{
	while (!SwapedQueue.empty())
	{
		PriorityQueue.push(SwapedQueue.top());
		SwapedQueue.pop();
	}

}

void CommandQueue::deleteElementAt(uint8_t Id)
{
	std::priority_queue<Command, vector<Command>, std::less<Command>> replacmentQueue = this->PriorityQueue;
	Command currentCommand;
	while (!this->PriorityQueue.empty())
	{    
		currentCommand = this->PriorityQueue.top();

		if (currentCommand.getId() == Id)
		{
			PriorityQueue.pop();
		}
		else
		{
			replacmentQueue.push(PriorityQueue.top());
			PriorityQueue.pop();
		}

	}
	swap(replacmentQueue);
	cout << "Deleted successfully \n";
}


