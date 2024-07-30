#include<Novice.h>
#include "EnemyBullet.h"
#include <iostream>
#include <list>

void EnemyBullet::Initialize(Vector2 pos)
{
	pos_ = pos;
}

void EnemyBullet::Update()
{
	std::list<const int>::iterator
}

void EnemyBullet::Draw()
{
	Novice::DrawEllipse(pos_.x, pos_.y, 7, 7, 0.0f, RED, kFillModeSolid);
}

void EnemyBullet::EnemyBulletCollision(Player* player)
{
	isDead_ = true;
}

bool EnemyBullet::IsDead() const
{
	return isDead_;
}
