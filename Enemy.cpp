#include "Enemy.h"


Enemy::Enemy(const std::string& type, int attackPower, const std::string& health)
        : type(type), attackpower(attackPower), health(health) {}

void Enemy::displayInfo()
{
    std::cout << "the type of the enemy: " << type << "\nthe attack power: " << attackpower << "\nhealth: " << health << "\n";
}