#pragma once

class Selector;

class Uint
{
private:
	int mapX_ = 0;
	int mapY_ = 0;
	int mapSize_ = 0;
	int id = 0;
	bool isSelected_ = false;

public:
	Uint() = default;
	void Init(int idref);
	void Update();
	void Draw();

	void Move(int x,int y);
	void MoveEnd(Selector*selector);

};