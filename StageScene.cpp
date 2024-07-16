#include "StageScene.h"
#include<Novice.h>

StageScene::StageScene()
{
}

//初期化処理
void StageScene::Init()
{
	inputHandler_ = new InputHandler();

	//Assign command
	inputHandler_->AssignMoveLeftCommand2PressKeyD();
	inputHandler_->AssignMoveLeftCommand2PressKeyA();

	//New Player
	player_ = new Player();

	player_->Init();
}

void StageScene::Update(char* keys, char* preKeys)
{
	//get Input
	iCommand_ = inputHandler_->HandlerInput();

	//set command
	if (this->iCommand_)
	{
		iCommand_->Exec(*player_);
	}

	if (preKeys[DIK_RETURN] && !keys[DIK_RETURN])
	{
		sceneNo = CLEAR;
	}

	//入力処理
	//update key state
	this->stageSceneInputHandler_->UpdateKeyState();

	//get command Type
	if (selector_->GetSelectMode() == SELECTOR)
	{
		this->command_ = stageSceneInputHandler_->SelectorHandeleInput(this->selector_);
	}
	else if (selector_->GetSelectMode() == UNIT)
	{
		this->command_ = stageSceneInputHandler_->UintHandleInput(&selector_->GetSelectedUnitAddress());
	}
}

void StageScene::Draw()
{
	Novice::DrawBox(0, 0, 1280, 720, 0, RED, kFillModeSolid);
	Novice::ScreenPrintf(0, 0, "StageScene");
	player_->Draw();
}
