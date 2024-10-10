#include "Game.h"
#include <iostream>

int main() {
    setlocale(LC_CTYPE, "rus");
    int totalMatches = 21;
    int maxMatchesPerTurn = 3;

    Game game(totalMatches, maxMatchesPerTurn);
    game.start();

    return 0;
}
