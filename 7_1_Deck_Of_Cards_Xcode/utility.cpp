#include <iostream>
#include "utility.h"

std::ostream& operator<<(std::ostream& os, suit s)
{
    switch(s)
    {
        case suit::clubs    : os << "clubs"; break;
        case suit::diamonds : os << "diamonds"; break;
        case suit::hearts   : os << "hearts"; break;
        case suit::spades   : os << "spades"; break;
    }
    return os;
}

std::ostream& operator<<(std::ostream& os, face c)
{
    switch(c)
    {
        case face::ace    : os << "ace"; break;
        case face::two    : os << "two"; break;
        case face::three  : os << "three"; break;
        case face::four   : os << "four"; break;
        case face::five   : os << "five"; break;
        case face::six    : os << "six"; break;
        case face::seven  : os << "seven"; break;
        case face::eight  : os << "eight"; break;
        case face::nine   : os << "nine"; break;
        case face::ten    : os << "ten"; break;
        case face::jack   : os << "jack"; break;
        case face::queen  : os << "queen"; break;
        case face::king   : os << "king"; break;
    }
    return os;
}
