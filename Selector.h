#pragma once
#include"Uint.h"

enum Mode
{
	SELECTOR,
	UNIT,
};

class Selector
{
private:
	int mapX_;
	int mapY_;
	int mapSize_;

	int selectMode_;

	Uint* uint_;
	Uint* selectedUint_;

public:

	Selector();

	void Init();
	void Update();
	void Draw();

	void Move(int x, int y);
	void SelectUint();

	int GetMapX() const { return mapX_; }
	int GetMapY() const { return mapY_; }
	int GetSelectMode() const { return selectMode_; }
};