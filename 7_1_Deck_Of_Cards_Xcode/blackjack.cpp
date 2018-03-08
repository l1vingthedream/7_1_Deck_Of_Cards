#include "blackjack.h"
#include <iostream>
#include <vector>
#include "deck.h"
#include "card.h"
#include "player.h"
#include "hand.h"


Blackjack::Blackjack(std::vector<std::string> player_name)
{
    for (auto p : player_name)
    {
        Player tmp(p);
        game_players.push_back(tmp);
    }
}

Blackjack::~Blackjack() {}

void Blackjack::hit(Player p)
{
    p.accept(game_deck.deal());
}

void Blackjack::state()
{
    std::cout << "++Current State++" << std::endl;
    for (auto p : game_players)
        std::cout << p << std::endl;
}


