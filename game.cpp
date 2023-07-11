#include "Game.h"


void Game::startGame()
{
    std::cout << "creating player and enemy\n";
    player = Player("Jungkook", 25, "full");
    enemy = Enemy("Goblin", 50, "full");      
}

void Game::playGame()
{
    std::cout << "the game are starting with these characters:\n";
    player.displayInfo();
    std::cout << "\n";
    enemy.displayInfo();
    std::cout << "\n";
    std::cout << "the game stars:\n";
    srand(time_t(0));
    int playerAction = std::rand() % 2;
    int enemyAction = std::rand() % 2;  

    if (playerAction == 0) 
    {
        std::cout << "Player Attacks!\nEnemy Takes Damage!\n";
    }
    else  
    {
        std::cout << "Player Defends!\nPlayer Takes Reduced Damage!\n";
    }
    if (enemyAction == 0) 
    {
        std::cout << "Enemy Flees!\nPlayer Wins!\n";
    }
    else
    {
        std::cout << "Enemy Attacks!\nPlayer Takes Damage!\n";
    }
}






