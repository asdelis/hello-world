//
//  CardTest.cpp
//  CardTest
//
//  Created by Andrew Delis on 8/29/23.
//

#include "Cards.hpp"

int main(int argc, const char * argv[]) {
    
    //tests whether buildDeck works
    std::vector<card> deck = {};
    deck = buildDeck(deck);
    assert(deck.size()==52);
    
    //tests whether printCardsInDeck works
    printCardsInDeck(deck);
    
    return 0;
}
