#include "Game.h"
#include <iostream>

Game::Game(int totalMatches, int maxMatchesPerTurn)
    : totalMatches(totalMatches), maxMatchesPerTurn(maxMatchesPerTurn), player1("Player 1"), player2("Player 2") {}

void Game::start() {
    while (totalMatches > 0) {
        takeTurn(player1);
        if (totalMatches <= 0) {
            std::cout << player1.getName() << " ��������!\n";
            break;
        }

        takeTurn(player2);
        if (totalMatches <= 0) {
            std::cout << player2.getName() << " ��������!\n";
            break;
        }
    }
}

void Game::takeTurn(Player& player) {
    std::cout << player.getName() << ", ������� ������ �� ������ �����? (1-" << maxMatchesPerTurn << "): ";
    int matchesTaken = player.takeMatches(maxMatchesPerTurn);
    totalMatches -= matchesTaken;
    std::cout << "�������� ������: " << totalMatches << "\n";
}
