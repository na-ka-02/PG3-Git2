﻿#pragma once
#include"IScene.h"
#include"InputHandler.h"
#include"StageSceneInputHandler.h"
#include"Selector.h"
#include"IStageSceneCommand.h"
#include <iostream>
#include <list>

class StageScene :public IScene
{
public:
	StageScene();
	void Init()override;
	void Update(char* keys, char* preKeys)override;
	void Draw()override;

private:
	InputHandler* inputHandler_ = nullptr;
	ICommand* iCommand_ = nullptr;
	Player* player_;

	StageSceneInputHandler* stageSceneInputHandler_ = nullptr;
	std::list<IStageSceneCommand*>commandHistory_;
	std::list<IStageSceneCommand*>::iterator commandHistoryItr_;

	StageSceneInputHandler* stageSceneInputHandler_ = nullptr;
	Selector* selector_ = nullptr;
	IStageSceneCommand* command_ = nullptr;
};
