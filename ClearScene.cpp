#include "ClearScene.h"
#include<Novice.h>

void ClearScene::Init()
{

}

void ClearScene::Update(char*keys, char*preKeys)
{
	if (preKeys[DIK_RETURN] && keys[DIK_RETURN] == 0)
	{
		sceneNo = TITLE;
	}
}

void ClearScene::Draw()
{
	Novice::DrawBox(0, 0, 1280, 720, 0, BLACK, kFillModeSolid);
}
