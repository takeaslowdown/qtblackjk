#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <random>

enum Card{
    Ace=1,
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King
};

Card inline rng_random_card() {
    return (Card)(rand() % 13 + 1);
}

enum State{
    Playing,
    Winning,
    Lost,
    Wait
};

class Player
{
private:
    std::vector<Card> cards;
    State state;
    unsigned int score;
public:
    Player(): state(Playing), score(0){ };

    ~Player(){  }

    unsigned int inline getScore() const ;
    void inline incrementScore();

    State inline getState() const ;
    void inline setState(State state);

    void inline addCard(Card c);
    void inline foldCards();
    int getCardsScoreSum();


};

#endif // PLAYER_H
