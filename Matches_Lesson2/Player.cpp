#include "Player.h"
#include <iostream>

Player::Player(const std::string& name) : name(name) {}

int Player::takeMatches(int maxMatches) {
    int matches;
    std::cin >> matches;
    while (matches < 1 || matches > maxMatches) {
        std::cout << "Неверное количество. Попробуйте снова (1-" << maxMatches << "): ";
        std::cin >> matches;
    }
    return matches;
}

std::string Player::getName() const {
    return name;
}
