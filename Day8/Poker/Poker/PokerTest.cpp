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
    
    //tests whether checkFlush and checkStraight works
    card card1 = {"spade",10};
    card card2 = {"spade",11};
    card card3 = {"spade",12};
    card card4 = {"spade",13};
    card card5 = {"spade",14};
    std::vector<card> testHand = {card2, card3, card1, card4, card5};
    assert(checkFlush(testHand) == true);
    assert(checkStraight(testHand) == true);
    assert(checkStraightFlush(testHand) == true);
    assert(checkRoyalFlush(testHand) == true);
    
    
    
    //printing to see what is in that hand
    //printCardsInDeck(hand);
    
    
    
    return 0;
}






