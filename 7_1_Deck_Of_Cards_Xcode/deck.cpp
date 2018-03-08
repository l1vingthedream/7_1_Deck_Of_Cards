#include <iostream>
#include <vector>
#include "deck.h"
#include "utility.h"
#include "card.h"

Deck::~Deck() {}

Deck::Deck() : cards(FACES*SUITS)
{
    this->init();
}

Deck::Deck(const Deck &o)
{
    for (auto el : o.cards)
        this->cards.push_back(el);
}

Card Deck::deal()
{
    Card c = cards.back();
    cards.pop_back();
    return c;
}

void Deck::init()
{
    int idx = 0;
    for (int i=0; i<SUITS; i++)
    {
        for (int j=0;j < FACES; j++)
        {
            idx =  i * FACES + j;
            cards[idx].m_suit  = (suit) i;
            cards[idx].m_face  = (face) j;
            cards[idx].m_value = j+1 > 10 ? 10 : j+1;
        }
    }
    this->shuffle();
}

void Deck::print()
{
    for (auto c : cards)
        std::cout << c.getface() << " of " << c.getsuit() << " ("
            << c.getvalue() << ")" << std::endl;
}

void Deck::shuffle()
{
    size_t decksize = cards.size();
    int idx = 0;
    srand(time(NULL));
    while (decksize)
    {
        idx = rand() % decksize;
        std::swap(cards[--decksize], cards[idx]);
    }
}
