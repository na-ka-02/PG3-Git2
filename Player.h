#pragma once
#include"Vector3.h"

class Player
{
public:
	Player();

	void Init();
	void Update();
	void Draw() const;

	//メンバ関数
	void MoveRight();
	void MoveLeft();

private:
	Vector3 pos_;
	float speed_ = 3.0f;
};
