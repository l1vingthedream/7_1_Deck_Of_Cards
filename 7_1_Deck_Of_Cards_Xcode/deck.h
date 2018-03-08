#ifndef deck_hpp
#define deck_hpp
#include <iostream>
#include <vector>
#include <ctime>
#include "card.h"
#include "utility.h"


class Deck
{
public:
    Deck();
    Deck(const Deck &o);
    ~Deck();
    void shuffle();
    void print();
    Card deal();
private:
    std::vector<Card> cards;
    void init();
};

#endif /* deck_hpp */




