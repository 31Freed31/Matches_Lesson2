#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
    Player(const std::string& name);
    int takeMatches(int maxMatches);
    std::string getName() const;

private:
    std::string name;
};

#endif // PLAYER_H
