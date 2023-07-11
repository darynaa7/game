#include "Player.h"
#include "Enemy.h"
#include <ctime>
#include <cstdlib>


class Game
{
private:
	Player player;
	Enemy enemy;
public:
	void startGame();
	void playGame();
};
