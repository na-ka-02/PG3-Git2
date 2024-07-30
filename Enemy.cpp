#include "Enemy.h"
#include<Novice.h>

void Enemy::Init()
{
	pos_.x = 30.0f;
	pos_.y = 600.0f;
}

void Enemy::Update()
{
	pos_.x += speed_;
	Return(min, max);
}

void Enemy::Draw() const
{
	Novice::DrawBox(int(pos_.x), int(pos_.y), 20, 20, 0.0f, RED, kFillModeSolid);
}

void Enemy::EnemyCollition()
{
}

