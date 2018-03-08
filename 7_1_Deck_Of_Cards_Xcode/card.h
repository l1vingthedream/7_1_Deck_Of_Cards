#ifndef card_hpp
#define card_hpp
#include <iostream>
#include "utility.h"

class Card
{
public:
    Card();
    Card(const Card &o);
    ~Card();
    suit getsuit();
    face getface();
    int  getvalue();
private:
    suit m_suit;
    face m_face;
    int  m_value;
    friend class Deck;
    friend std::ostream& operator<<(std::ostream& os,Card c);
};

#endif /* card_hpp */
