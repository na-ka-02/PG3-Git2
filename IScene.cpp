﻿#include "IScene.h"

//タイトルシーンで初期化
int IScene::sceneNo = TITLE;

//仮想デストラクタの定義
//純粋仮想関数化してないので、ここで定義する
IScene::~IScene()
{
}

//シーン番号のゲッター
int IScene::GetSceneNo()
{
	return sceneNo;
}
