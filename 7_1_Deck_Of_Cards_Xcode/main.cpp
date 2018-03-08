#include <iostream>
#include <vector>
#include <string>
#include "blackjack.h"
#include "player.h"

int main(int argc, const char * argv[]) {

    std::vector<std::string> player_names = {"jack", "jill"};
    Blackjack b(player_names);
    b.play();
}
