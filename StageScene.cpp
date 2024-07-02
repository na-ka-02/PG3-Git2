#include "StageScene.h"
#include<Novice.h>

void StageScene::Init()
{

}

void StageScene::Update(char* keys, char* preKeys)
{
	if (preKeys[DIK_RETURN] && !keys[DIK_RETURN])
	{
		sceneNo = CLEAR;
	}
}

void StageScene::Draw()
{
	Novice::DrawBox(0, 0, 1280, 720, 0, RED, kFillModeSolid);
}
