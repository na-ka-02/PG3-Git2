#include <iostream>
#include <list>
#include <string>
#include"Vector2.h"
#include"Player.h"

class EnemyBullet
{
public:
	void Initialize(Vector2 pos);
	void Update() const;
	void Draw();
	void EnemyBulletCollision(Player* player);
private:
	Vector2 pos_;
	float speed_ = 4.0f;
	float frame_ = 20.0f;
	bool enemyBulletFlag_ = false;
	bool isEnemyDeadFlag_ = false;
	bool isPlayerDeadFlag_ = false;
};
