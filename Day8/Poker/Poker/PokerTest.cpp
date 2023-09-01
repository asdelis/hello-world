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
    
    //tests whether checkFlush, checkStraight,
    //checkStraightFlush, and checkRoyalFlush works
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
    
    //tests whether checkFullHouse works
    //by making two hands that should return true
    card card6 = {"spade",10};
    card card7 = {"spade",11};
    card card8 = {"spade",12};
    card card9 = {"heart",13};
    card card10 = {"heart",14};
    std::vector<card> testHandTwo = {card2, card3, card1, card4, card5};
    assert(checkFullHouse(testHandTwo) == true);
    card card11 = {"spade",10};
    card card12 = {"spade",11};
    card card13 = {"heart",12};
    card card14 = {"heart",13};
    card card15 = {"heart",14};
    std::vector<card> testHandThree = {card2, card3, card1, card4, card5};
    assert(checkFullHouse(testHandThree) == true);
    
    
    //printing to see what is in that hand
    //printCardsInDeck(hand);
    
    
    
    return 0;
}






