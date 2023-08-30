//
//  CardTest.cpp
//  CardTest
//
//  Created by Andrew Delis on 8/29/23.
//

#include "Cards.hpp"
#include "Cards.cpp"



int main(int argc, const char * argv[]) {
    
    std::string input = "build";
    std::vector<card> deck;
    deck = buildDeck(input);
    assert(deck.size() == 52);
    
    
    
    return 0;
}
