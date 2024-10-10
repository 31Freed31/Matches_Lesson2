#ifndef GAME_H
#define GAME_H

#include "Player.h"

class Game {
public:
    Game(int totalMatches, int maxMatchesPerTurn);
    void start();

private:
    int totalMatches;
    int maxMatchesPerTurn;
    Player player1;
    Player player2;

    void takeTurn(Player& player);
};

#endif // GAME_H
