﻿#pragma once
#include"IScene.h"
#include"InputHandler.h"

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
};
