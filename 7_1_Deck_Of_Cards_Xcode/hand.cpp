#include <iostream>
#include <vector>
#include "card.h"
#include "deck.h"
#include "hand.h"
#include "utility.h"

Hand::Hand() : holding(), score()
{
}

Hand::~Hand() {}

Hand::Hand(const Hand &o) : holding(o.holding), score(o.score)
{
    
}

void Hand::addCard(Card c)
{
    holding.push_back(c);
    this->updateScore();
}

void Hand::updateScore()
{
    for (auto el : holding)
        score+=el.getvalue();
}

int Hand::getScore()
{
    return score;
}

