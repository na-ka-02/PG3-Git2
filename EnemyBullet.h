#include <iostream>
#include <list>
#include <string>
#include"Vector2.h"

class EnemyBullet
{
public:
	void Initialize();
	void Update();
	void Draw();
private:
	Vector2 pos_;
	float speed_ = 3.0f;
	float frame_ = 20.0f;
	std::list<const float*>bulletList
	{
	
	};
};
