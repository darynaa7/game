#pragma once
#include "GameEntity.h"

class Player : public GameEntity
{
private:
    std::string name;
    int age;
    std::string health;
public:
    
    Player()
    {
        name = "unknown";
        age = 0; 
        health = "full";
    }
    Player(const std::string& name, int age, const std::string& health);
    void displayInfo()override;
};
