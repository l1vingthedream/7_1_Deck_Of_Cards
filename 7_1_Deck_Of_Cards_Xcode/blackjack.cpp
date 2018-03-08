#include "blackjack.h"
#include <iostream>
#include <vector>
#include "deck.h"
#include "card.h"
#include "player.h"
#include "hand.h"


Blackjack::Blackjack(std::vector<std::string> player_name) : game_state("init")
{
    for (auto p : player_name)
    {
        Player tmp(p);
        game_players.push_back(tmp);
        player_queue.push(tmp);
    }
    
}

Blackjack::~Blackjack() {}

void Blackjack::hit(Player p)
{
    p.accept(game_deck.deal());
}

void Blackjack::dump()
{
    std::cout << "++Current State++" << std::endl;
    for (auto p : game_players)
    {
        std::cout << p << std::endl;
        p.printHand();
    }
}

int Blackjack::getPlayerInput(Player p)
{
    std::cout << p.getName() << ", Enter (1) to hit, (0) to stay" << std::endl;
    int input = 2;
    std::cin >> input;
    return input;
}

Player Blackjack::getWinner()
{
    Player winner;
    for (auto p : game_players)
        if (p.getScore() > winner.getScore())
            winner = p;
    return winner;
}

void Blackjack::play()
{
    while (this->game_state != "end")
        game_state = this->stateMachine();
    std::cout << "Winner is: " << this->getWinner() << std::endl;
}
std::string Blackjack::stateMachine()
{
    std::string nextState = "";
    if (game_state == "init")
    {
        for (int i=0;i<2;i++)
        {
            for (int j=0;j<game_players.size();j++)
            {
                game_players[j].accept(game_deck.deal());
                //TODO:  show hand
                game_players[j].printHand();
            }
        }
        nextState = "player_reply";
    }
    else if (game_state == "player_reply")
    {
        while (!player_queue.empty())
        {
            Player p = player_queue.front();
            player_queue.pop();
            //TODO:  printing player hand
            p.printHand();
            if (getPlayerInput(p)) //1 = hit, 0 = stay
            {
                //give them a card and give them the option to hit again by adding the player_queue
                p.accept(game_deck.deal());
                if ( p.getScore() < 21 )
                    player_queue.push(p);
            }
        }
        nextState  = "end";
    }
    //TODO:  Temp Debug Statement
    this->dump();
    return nextState;
}




