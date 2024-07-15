#include "SelectorCommand.h"


SelectorMoveCommand::SelectorMoveCommand(Selector* selector, int x, int y)
{
}

void SelectorMoveCommand::Exec()
{
}

SelectUnitCommand::SelectUnitCommand(Selector* selector)
{
}

void SelectUnitCommand::Exec()
{
}

UintMoveCommand::UintMoveCommand(Uint* uint, int x, int y)
{
}

void UintMoveCommand::Exec()
{
}

UintMoveEndCommand::UintMoveEndCommand(Uint* uint, Selector* selector)
{
}

void UintMoveEndCommand::Exec()
{
}

