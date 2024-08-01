#include<Novice.h>
#include "EnemyBullet.h"
#include <iostream>
#include <list>

void EnemyBullet::Initialize(Vector2 pos)
{
	pos_ = pos;
}

void EnemyBullet::Update() const
{
	if (isEnemyDeadFlag_ == false)
	{

	}
}

void EnemyBullet::Draw()
{
	Novice::DrawEllipse(int(pos_.x + 12.5f), int(pos_.y + 5.0f), 7, 7, 0.0f, BLACK, kFillModeSolid);
}

//当たり判定
void EnemyBullet::EnemyBulletCollision(Player* player)
{
	player->IsDead();
}

