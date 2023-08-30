//
//  PokerTest.cpp
//  PokerTest
//
//  Created by Andrew Delis on 8/30/23.
//

#include "Poker.hpp"

int main(int argc, const char * argv[]) {
    
    //tests whether buildDeck works
    std::vector<card> deck = {};
    deck = buildDeck(deck);
    assert(deck.size()==52);
    
    //tests whether shuffleDeck works
    shuffleDeck(deck);
    
    //tests whether printDeck works
    printCardsInDeck(deck);
    
    
    return 0;
}






