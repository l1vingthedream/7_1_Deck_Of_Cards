#ifndef blackjack_hpp
#define blackjack_hpp

#include <iostream>
#include <vector>
#include "deck.h"
#include "card.h"
#include "player.h"
#include "hand.h"

class Blackjack
{
public:
    Blackjack(std::vector<std::string> p);
    ~Blackjack();
    void hit(Player p);
    void state();
private:
    std::vector<Player> game_players;
    Deck                game_deck;
};

#endif /* blackjack_hpp */
