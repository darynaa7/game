#include "Player.h"


Player::Player(const std::string& name, int age, const std::string& health)
        : name(name), age(age), health(health) {}

void Player::displayInfo ()
{
    std::cout << "the name of the player: " << name << "\nthe age: " << age << "\nhealth: " << health << "\n";
}
