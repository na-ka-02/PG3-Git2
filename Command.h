#pragma once
#include"Player.h"

class Player;

class ICommand
{
public:
	virtual ~ICommand();
	virtual void Exec(Player& player) = 0;
};

class PlayerMoveRightCommand:public ICommand
{
public:
	void Exec(Player&player)override;
};

class PlayerMoveLeftCommand :public ICommand
{
public:
	void Exec(Player& player)override;
};

