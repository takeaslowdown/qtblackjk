#include "player.h"
#include <algorithm>

unsigned int inline Player::getScore() const{
    return this->score;
}

void inline Player::incrementScore() {
    this->score++;
}

State inline Player::getState() const{
    return this->state;
}

void inline Player::setState(State state) {
    this->state = state;
}

void inline Player::addCard(Card c) {
    this->cards.push_back(c);
}

void inline Player::foldCards() {
    this->cards.clear();
}

int inline Player::getCardsScoreSum() {
    int sum = 0;
    for(const Card c : this->cards){
        sum += (int)c;
    }
    return sum;
}
