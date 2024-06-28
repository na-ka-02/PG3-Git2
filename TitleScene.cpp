#include "TitleScene.h"
#include<Novice.h>

void TitleScene::Init()
{

}

void TitleScene::Update(char* keys, char* preKeys)
{
	if (preKeys[DIK_RETURN] && keys[DIK_RETURN] == 0)
	{
		sceneNo = STAGE;
	}
}

void TitleScene::Draw()
{
	Novice::DrawBox(0, 0, 1280, 720, 0, WHITE, kFillModeSolid);
}