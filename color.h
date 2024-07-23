#pragma once

// 色の変換
unsigned int GetColor(unsigned int red, unsigned int blue, unsigned int green, unsigned int alpha);

struct Color final {
	int red;
	int blue;
	int green;
	int alpha;
};
