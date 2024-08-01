#pragma once
#include"Vector2.h"

class Player
{
public:
	Player();

	void Init();
	void Update();
	void Draw() const;
	bool IsDead();

	//メンバ関数
	void MoveRight();
	void MoveLeft();

private:
	Vector2 pos_;
	float speed_ = 3.0f;
	bool isPlayerDeadFlag_ = false;
};
