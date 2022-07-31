
#include <iostream>
#include "CommandQueue.h"
#include <cstdlib>
#include "Controller.h"
using namespace std;

int main()
{
    Controller* controller= Controller::GetInstance();
	std::cout << "Hello World!\n";

	int nRows=3;

	auto arr2d = new uint8_t[nRows][3]();
	arr2d[0][0] =0x11;
	arr2d[0][1] =0x57;//W=57//D=44//R=53
	arr2d[0][2] = 5;//pri
	arr2d[1][0] = 0x11;//length
	arr2d[1][1] = 0x44;//address
	arr2d[1][2] = 0x09;
	arr2d[2][0] = 0x55;
	controller->addCommand(arr2d);




}




