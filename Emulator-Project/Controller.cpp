#include "Controller.h"
#include "Factory.h"
#include "CommandFactory.h"
Controller* Controller::InstanceController = 0;

Controller* Controller::GetInstance()
{
	return (!InstanceController) ?
		InstanceController = new Controller() :
		InstanceController;
}

void Controller::addCommand(uint8_t Array2D[][3])
{
	Command* ch = reinterpret_cast<Command*>(Array2D);
	cout << ch->getId();
	cout << ch->getOpcode();
	cout << "priority" << ch->getPriority();
	cout << "length " << ch->getData().getLength();
	//cout << "first element" << ch->getData().getValue();
	//cout << ch;
	//CommandFactory* commandFactory;
	//commandFactory = new Factory();
	char type= (char)ch->getOpcode();
	char* ptrToType = const_cast<char*> (&type);
	cout << "type =" << *ptrToType;
	Factory factory;
	//Command* command = factory.createCommand(ptrToType);


}
