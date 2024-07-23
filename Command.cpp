#include "Command.h"

ICommand::~ICommand()
{
}

void PlayerMoveRightCommand::Exec(Player& player)
{
	player.MoveRight();
}

void PlayerMoveLeftCommand::Exec(Player& player)
{
	player.MoveLeft();
}

