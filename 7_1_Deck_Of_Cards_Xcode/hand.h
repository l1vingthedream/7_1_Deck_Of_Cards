#ifndef hand_hpp
#define hand_hpp
#include <iostream>
#include <vector>
#include "card.h"
#include "deck.h"
#include "hand.h"

class Hand
{
public:
    Hand();
    Hand(const Hand &o);
    ~Hand();
    void addCard(Card c);
    int  getScore();
private:
    std::vector<Card> holding;
    int               score;
    void updateScore();
    friend std::ostream& operator<<(std::ostream &os, Hand h);
};


#endif /* hand_hpp */
