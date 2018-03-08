#ifndef utility_hpp
#define utility_hpp
#include <iostream>

#define SUITS 4
#define FACES 13

enum class suit
{ clubs, diamonds, hearts, spades };
enum class face
{ ace, two, three, four, five, six, seven, eight, nine, ten, jack, queen, king };

std::ostream& operator<<(std::ostream& os, suit s);
std::ostream& operator<<(std::ostream& os, face c);


#endif /* utility_hpp */
