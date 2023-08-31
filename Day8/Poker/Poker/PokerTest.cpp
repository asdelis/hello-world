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
    deck = createDeck(deck);
    assert(deck.size()==52);
    
    //tests whether shuffleDeck works
    shuffleDeck(deck);
    
    //tests whether printDeck works
    //printCardsInDeck(deck);
    
    //tests whether createHand works
    std::vector<card> hand = {};
    hand = createHand(deck);
    assert(hand.size() == 5);
    
    //printing to see what is in that hand
    //printCardsInDeck(hand);
    
    
    
    return 0;
}






