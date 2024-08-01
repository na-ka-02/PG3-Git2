#include "Enemy.h"
#include<Novice.h>

void Enemy::Init()
{
	pos_ = { 30.0f, 600.0f };
}

void Enemy::Update()
{
	if (isEnemyDeadFlag_ == false)
	{
		pos_.x += speed_;
		Return(min, max);
		Bullet();
	}
}

void Enemy::Draw() const
{
	Novice::DrawBox(int(pos_.x), int(pos_.y), 20, 20, 0.0f, RED, kFillModeSolid);
}

void Enemy::Bullet()
{
	if (bulletFrame_ == 0)
	{
		for (int i = 0; i < bulletNum; i++)
		{
			if (bulletShotFlag_[i] == false)
			{
				bulletShotFlag_[i] = true;
				bulletPos_[i] = pos_;
				bulletFrame_ = 20.0f;
			}
		}
	}
}

void Enemy::EnemyCollition()
{
}

Vector2 Enemy::GetPosition()
{
	return pos_;
}

