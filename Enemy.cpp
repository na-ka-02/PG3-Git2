#include "Enemy.h"
#include<Novice.h>

void Enemy::Init()
{
	pos_ = { 30.0f, 600.0f };
}

void Enemy::Update(EnemyBullet* enemyBullet)
{
	if (isEnemyDeadFlag_ == false)
	{
		pos_.x += speed_;
		Return(min, max);
		enemyBullet->Update();
	}
}

void Enemy::Draw() const
{
	Novice::DrawBox(int(pos_.x), int(pos_.y), 20, 20, 0.0f, RED, kFillModeSolid);
}

void Enemy::EnemyCollition()
{
}

Vector2 Enemy::GetPosition()
{
	return pos_;
}

