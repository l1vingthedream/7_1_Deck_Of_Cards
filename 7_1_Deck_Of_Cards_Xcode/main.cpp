#include <iostream>
#include <vector>
#include <string>
#include "blackjack.h"
#include "player.h"

int main(int argc, const char * argv[]) {

    std::string p1 = "jack";
    std::string p2 = "jill";
    std::vector<std::string> players;
    players.push_back(p1);
    players.push_back(p2);
    Blackjack b(players);
    b.state();
}
