#ifndef GAME_H
#define GAME_H

#include <vector>
#include "player.h"

class Game
{
private:
    std::vector<Player> players;
public:
    Game(size_t playersNum);
    void startRound();
    void turn();
    void release();
};

#endif // GAME_H
