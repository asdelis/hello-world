//
//  CardTest.cpp
//  CardTest
//
//  Created by Andrew Delis on 8/29/23.
//

#include "Cards.hpp"


int main(int argc, const char * argv[]) {
    
    //testing whether buildDeck works
    std::string input = "build";
    std::vector<card> deck;
    deck = buildDeck(input);
    assert(deck.size() == 52);
    
    //testing whether printDeck works
    
    
    
    return 0;
}
