#ifndef player_hpp
#define player_hpp

#include <iostream>
#include <vector>
#include <string>
#include "hand.h"
#include "card.h"
#include "deck.h"
#include "utility.h"

//TODO derive Player from Hand.  Make virtual functions of Hand
class Player
{
public:
    Player(std::string s);
    Player();
    Player(const Player &o);
    ~Player();
    void accept(Card c);
    std::string getName();
    int getScore();
    void printHand();
private:
    Hand phand;
    std::string name;
    friend std::ostream& operator<<(std::ostream &os,Player p);
};


#endif /* player_hpp */
