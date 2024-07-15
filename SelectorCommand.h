#pragma once
#include"IStageSceneCommand.h"
#include"Selector.h"

class SelectorMoveCommand :public IStageSceneCommand
{
public:
	SelectorMoveCommand(Selector* selector, int x, int y);
	void Exec()override;
private:
	Selector* selector_;
	int x_;
	int y_;
};

class SelectUnitCommand :public IStageSceneCommand
{
public:
	SelectUnitCommand(Selector* selector);
	void Exec()override;
private:
	Selector* selector_;
};

class UintMoveCommand :public IStageSceneCommand
{
public:
	UintMoveCommand(Uint* uint, int x, int y);
	void Exec()override;

private:
	Uint* uint_;
	int x_;
	int y_;
};

class UintMoveEndCommand :public IStageSceneCommand
{
public:
	UintMoveEndCommand(Uint* uint, Selector* selector);
	void Exec()override;

private:
	Uint* uint_;
	Selector* selector_;
};