#pragma once
#include"Selector.h"
#include"Uint.h"
#include"StageSceneInputHandler.h"
#include"IStageSceneCommand.h"

class StageSceneInputHandler
{
private:
	char keys_[255] = { 0 };
	char preKeys_[255] = { 0 };

	Selector* selector_;
	Uint* selectedUint_;

public:
	StageSceneInputHandler();
	void UpdateKeyState();

	IStageSceneCommand* SelectorHandeleInput(Selector* selector);
	IStageSceneCommand* UintHandleInput(Uint* uint);

	bool CheckUndoStatus();
};