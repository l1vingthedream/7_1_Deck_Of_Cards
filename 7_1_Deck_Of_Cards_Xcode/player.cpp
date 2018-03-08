//
//  player.cpp
//  7_1_Deck_Of_Cards_Xcode
//
//  Created by Michael Begic on 3/7/18.
//  Copyright © 2018 momobobo. All rights reserved.
//

#include "player.h"
#include "deck.h"
#include "card.h"
#include "utility.h"
#include "hand.h"

Player::Player(std::string s) : name(s), phand()
{
}

Player::Player() : name(), phand()
{
}

Player::Player(const Player &o) : name(o.name), phand(o.phand)
{
}


Player::~Player() {}

void Player::accept(Card c)
{
    this->phand.addCard(c);
}

std::string Player::getName()
{
    return this->name;
}

int Player::getScore()
{
    return this->phand.getScore();
}

void Player::printHand()
{
    std::cout << *this << "(score) //  Hand is: " << std::endl << this->phand;
}

std::ostream& operator<<(std::ostream &os,Player p)
{
    return os << p.name << ": " << p.phand.getScore();
}
