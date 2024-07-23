#pragma once
#include<Command.h>

class InputHandler
{
public:
	ICommand* HandlerInput();

	void AssignMoveLeftCommand2PressKeyA();
	void AssignMoveRightCommand2PressKeyD();
	void AssignMoveLeftCommand2PressKeyLeft();
	void AssignMoveRightCommand2PressKeyRight();

private:
	ICommand* pressKeyD_;
	ICommand* pressKeyA_;
	ICommand* pressKeyLeft_;
	ICommand* pressKeyRight_;
};