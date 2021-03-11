#include "game.h"

Game::Game(size_t playersNum)
{
    this->players = std::vector<Player>(playersNum);
    for(size_t _=0;_<playersNum;_++){
        this->players.push_back(Player());
    }
}

void Game::startRound() {
    for(Player p : this->players) {
        for(short _ = 0; _<2;_++) {
            p.addCard(rng_random_card());
        }
    }
}

void Game::turn() {
    short playing = this->players.size();
    for(Player p: this->players) {
        if (p.getState() == Wait) {
            playing -= 1;
            continue;
        }
        p.addCard(rng_random_card());
    }

    if (playing == 0) {
        this->release();
    }
}

void Game::release(){

}
