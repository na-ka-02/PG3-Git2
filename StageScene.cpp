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
	inputHandler_->AssignMoveRightCommand2PressKeyD();
	inputHandler_->AssignMoveLeftCommand2PressKeyA();
	inputHandler_->AssignMoveLeftCommand2PressKeyLeft();
	inputHandler_->AssignMoveRightCommand2PressKeyRight();

	//New Player
	player_ = new Player();
	player_->Init();

	//New Enemy
	enemy_ = new Enemy();
	enemy_->Init();

	//New EnemyBullet
	enemyBullet_ = new EnemyBullet();
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

	Vector2 enemyPos = enemy_->GetPosition();
	enemyBullet_->Initialize(enemyPos);

	enemy_->Update(enemyBullet_);

	if (preKeys[DIK_RETURN] && !keys[DIK_RETURN])
	{
		sceneNo = CLEAR;
	}
}

void StageScene::Draw()
{
	Novice::DrawBox(0, 0, 1280, 720, 0, BLUE, kFillModeSolid);
	Novice::ScreenPrintf(0, 0, "StageScene");
	player_->Draw();
	enemy_->Draw();
	enemyBullet_->Draw();
}
