#include "StageSceneInputHandler.h"

StageSceneInputHandler::StageSceneInputHandler()
{
}

void StageSceneInputHandler::UpdateKeyState()
{
}

IStageSceneCommand* StageSceneInputHandler::SelectorHandeleInput(Selector* selector)
{
	return nullptr;
}

IStageSceneCommand* StageSceneInputHandler::UintHandleInput(Uint* uint)
{
	return nullptr;
}

bool StageSceneInputHandler::CheckUndoStatus()
{
	return false;
}
