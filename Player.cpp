#include "Player.h"
#include<Novice.h>


Player::Player()
{
}

void Player::Init()
{
	pos_.x = 30.0f;
	pos_.y = 30.0f;
}

void Player::Update()
{
	MoveRight();
	MoveLeft();
}

void Player::Draw() const
{
	Novice::DrawBox(int(pos_.x), int(pos_.y), 20, 20, 0.0f, WHITE, kFillModeSolid);

}

void Player::MoveRight()
{
	this->pos_.x += this->speed_;
}

void Player::MoveLeft()
{
	this->pos_.x -= this->speed_;
}

bool Player::IsDead()
{
	return isPlayerDeadFlag_;
}