#include <iostream>
#include <sstream>
#include <vector>
#include "card.h"
#include "deck.h"
#include "hand.h"
#include "utility.h"

Hand::Hand() : holding(), score(0)
{
}

Hand::~Hand() {}

Hand::Hand(const Hand &o) : holding(o.holding), score(o.score)
{
    
}

void Hand::addCard(Card c)
{
    this->holding.push_back(c);
    //TODO
    std::cout << "hand size now: " << holding.size() << std::endl;
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

std::ostream& operator<<(std::ostream &os, Hand h)
{
    os.setf(std::ios_base::app | std::ios_base::out);
    for (auto c : h.holding)
    {
        os << c;
    }
    return os;
}

