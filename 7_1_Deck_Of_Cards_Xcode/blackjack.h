#ifndef blackjack_hpp
#define blackjack_hpp

#include <iostream>
#include <vector>
#include <queue>
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
    void dump();
    void play();
private:
    std::vector<Player> game_players;
    Deck                game_deck;
    std::string         game_state; //valid vals:  init_deal // player_reply
    std::queue<Player>  player_queue;
    std::string stateMachine();
    int getPlayerInput(Player p);
    Player getWinner();
};

#endif /* blackjack_hpp */
