#pragma once
#include"Player.h"
#include"Vector2.h"

class PlayerBullet
{
public:
	void Initialize();
	void Update();
	void Draw();
private:
	Vector2 pos_;
	float speed_ = 3.0f;
	bool playerBulletFlag_ = false;
};