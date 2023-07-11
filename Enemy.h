#ifndef ENEMY
#define ENEMY
#include "GameEntity.h"


class Enemy : public GameEntity
{
private:
	std::string type;
	int attackpower;
	std::string health;
public:
	Enemy()
	{ 
		type = "unknown";
		attackpower = 0;
		health = "full";
	}
	Enemy(const std::string& type, int attackPower, const std::string& health);
	void displayInfo()override;
};
#endif 

