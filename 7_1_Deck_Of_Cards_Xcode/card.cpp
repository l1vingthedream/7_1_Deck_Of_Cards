#include "card.h"
#include "utility.h"

Card::Card() {}
Card::Card(const Card &o) : m_suit(o.m_suit), m_face(o.m_face), m_value(o.m_value)  {}
Card::~Card() {}

suit Card::getsuit()  { return m_suit; }
face Card::getface()  { return m_face; }
int  Card::getvalue() { return m_value; }

/*testing */
