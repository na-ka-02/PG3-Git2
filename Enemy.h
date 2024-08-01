#pragma once
#include"Vector2.h"

class Enemy
{
public:
	void Init();
	void Update();
	void Draw() const;
	void Bullet();
	void EnemyCollition();
	Vector2 GetPosition();
	//跳ね返り処理
	template<typename position> position Return(position min, position max);

private:
	const static int bulletNum = 10;
	Vector2 pos_;
	Vector2 bulletPos_[bulletNum]{};
	int deadFrame_ = 120;
	float speed_ = 3.0f;
	float bulletSpeed_;
	float bulletFrame_ = 0.0f;
	float min = 10;
	float max = 1270;
	bool isEnemyDeadFlag_ = false;
	bool bulletShotFlag_[bulletNum]{};
};

template<typename position>
inline position Enemy::Return(position min, position max)
{
	if (pos_.x > max)
	{
		return speed_ = speed_ * -1.0f;
	}
	else if (pos_.x < min)
	{
		return speed_ = speed_ * -1.0f;
	}
	else
		return position(speed_);
}
