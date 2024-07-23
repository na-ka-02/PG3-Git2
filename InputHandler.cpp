#include "InputHandler.h"
#include<Novice.h>

ICommand* InputHandler::HandlerInput()
{
	if (Novice::CheckHitKey(DIK_D))
	{
		return pressKeyD_;
	}
	if (Novice::CheckHitKey(DIK_A))
	{
		return pressKeyA_;
	}
	if (Novice::CheckHitKey(DIK_LEFT))
	{
		return pressKeyLeft_;
	}
	if (Novice::CheckHitKey(DIK_RIGHT))
	{
		return pressKeyRight_;
	}
	return nullptr;
}

void InputHandler::AssignMoveLeftCommand2PressKeyA()
{
	ICommand* command = new PlayerMoveLeftCommand;
	this->pressKeyA_ = command;
}

void InputHandler::AssignMoveRightCommand2PressKeyD()
{
	ICommand* command = new PlayerMoveRightCommand;
	this->pressKeyD_ = command;
}

void InputHandler::AssignMoveLeftCommand2PressKeyLeft()
{
	ICommand* command = new PlayerMoveLeftCommand;
	this->pressKeyLeft_ = command;
}

void InputHandler::AssignMoveRightCommand2PressKeyRight()
{
	ICommand* command = new PlayerMoveRightCommand;
	this->pressKeyRight_ = command;
}
