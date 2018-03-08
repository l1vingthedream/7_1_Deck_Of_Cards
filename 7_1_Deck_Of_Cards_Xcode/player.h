#ifndef player_hpp
#define player_hpp

#include <iostream>
#include <vector>
#include <string>
#include "hand.h"
#include "card.h"
#include "deck.h"
#include "utility.h"

class Player
{
public:
    Player(std::string s);
    Player(const Player &o);
    ~Player();
    void accept(Card c);
private:
    Hand phand;
    std::string name;
    friend std::ostream& operator<<(std::ostream &os,Player p);
};


#endif /* player_hpp */
