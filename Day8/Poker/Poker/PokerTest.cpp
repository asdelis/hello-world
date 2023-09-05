//
//  PokerTest.cpp
//  PokerTest
//
//  Created by Andrew Delis on 8/30/23.
//

#include "Poker.hpp"

int main(int argc, const char * argv[]) {
    //STATS
    //create deck
    std::vector<card> statsDeck = {};
    statsDeck = createDeck(statsDeck);
    assert(statsDeck.size()==52);
    
    //create shuffle loop and record stats
    int flushCount = 0;
    int straightCount = 0;
    int straightFlushCount = 0;
    int royalFlushCount = 0;
    int fullHouseCount = 0;
    for (int i = 0; i < 1000000; i++) {
        shuffleDeck(statsDeck);
        std::vector<card> statsDeckHand = {};
        statsDeckHand = createHand(statsDeck);
        if (checkFlush(statsDeckHand)) {
            flushCount += 1;
        }
        else if (checkStraight(statsDeckHand)) {
            straightCount += 1;
        }
        else if (checkStraightFlush(statsDeckHand)) {
            straightFlushCount += 1;
        }
        else if (checkRoyalFlush(statsDeckHand)) {
            royalFlushCount += 1;
        }
        else if (checkFullHouse(statsDeckHand)) {
            fullHouseCount += 1;
        }
    }
    std::cout << "Flush Count; " << flushCount << "\n";
    std::cout << "Straight Count; " << straightCount << "\n";
    std::cout << "Full House Count; " << fullHouseCount << "\n";
    std::cout << "straightFlushCount; " << straightFlushCount << "\n";
    std::cout << "Royal Flush Count; " << royalFlushCount << "\n";
    
    
    //FUNCTION TESTS
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
    
    
    
    
    return 0;
}






