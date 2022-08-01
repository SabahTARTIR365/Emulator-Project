#include "CommandQueue.h"
#include"Command.h"
#include <queue>
#include "Response.h"
using namespace std;
 std::priority_queue<Command>  CommandQueue:: PriorityQueue;
 bool CommandQueue::isExcute = true;
 //Memory* CommandQueue::memory=Memory::GetInstance();

void CommandQueue::Add(Command command)
{
	cout << "inside add";
	this->PriorityQueue.push(command);
}

void CommandQueue::Excute()
{
	Command CurrentCommand;
	Response CurrentResponse;
	while (isExcute)
	{
		while (!PriorityQueue.empty())
		{

			CurrentCommand = PriorityQueue.top();
			CurrentResponse.getCommand() = CurrentCommand;
			CurrentResponse.getCommand().setOpcode(CurrentCommand.getOpcode());
			CurrentResponse.SetStatus(Succeeded);

			if (CurrentCommand.getOpcode() == 'R')
			  { 
				cout << "in execute read case ";
				uint8_t* wantedData= memory->getData(CurrentCommand.getData().getAddress(), CurrentCommand.getData().getLength());
				CurrentResponse.getCommand().getData().setValue(wantedData);
			}
			else if (CurrentCommand.getOpcode() == 'W')
			{
				cout << "in execute wrtie case----- ";
				memory->add(CurrentCommand.getData());
				
			}
			else if (CurrentCommand.getOpcode() == 'D')
			{
				memory->erase(CurrentCommand.getData().getAddress(), CurrentCommand.getData().getLength());
			}
			PriorityQueue.pop();
			this->printResponse(CurrentResponse);

		}
		isExcute = false;

	}


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




void CommandQueue::printResponse(Response response)
{
	cout << "\n Command Id :" <<(int) response.getCommand().getId() << "  ";
	cout << "Command type (response " << (char)response.getCommand().getOpcode() << ") ";
	cout << "Command Priority (response " << (bool)response.getCommand().getPriority() << ") \n";
	if (response.getStatus() == Succeeded) cout << "Status Succeeded ";
	else cout << "Status Failed \n";

	if (response.getCommand().getOpcode() == 'W') {
		cout << "hiiiiiiiiiiiiiiiiiiii";
	}


	//cout << response;
}
