//
//  Poker.cpp
//  Poker
//
//  Created by Andrew Delis on 8/30/23.
//

#include "Poker.hpp"

//generate cards
//no input, just outputs a deck of cards
std::vector<card> createDeck(std::vector<card> deck){
    
    //a variable that will store the individual cards
    //the vectors that the function will use to generate the cards
    std::vector<std::string> allSuit = {"spade", "heart", "diamond", "club"};
    std::vector<int> allRank = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    //a double loop that matches all ranks to suits as a card
    //and stores it in a vector
    for (int i = 0; i < allSuit.size(); i++){
        for(int j = 0; j < allRank.size(); j++){
            card singleCard = {allSuit[i], allRank[j]};
            deck.push_back(singleCard);
        }
    }
    return deck;
}

//no output just prints the cards in the deck
void printCardsInDeck(const std::vector<card>& deck){
    for (card singleCard : deck) {
        std::cout << singleCard.suit << " ";
        if (singleCard.rank == 14) {
            std::cout << "ace\n";
        }
        else if (singleCard.rank == 11) {
            std::cout << "jack\n";
        }
        else if (singleCard.rank == 12) {
            std::cout << "queen\n";
        }
        else if (singleCard.rank == 13) {
            std::cout << "king\n";
        }
        else {
            std::cout << singleCard.rank << "\n";
        }
    }
}

//no output, just shuffles the deck of cards that was made earlier
//using the rand() function and the swap method
void shuffleDeck(std::vector<card>& deck){
    int randomPosition;
    card tempCard;
    for (int i = 0; i < 52; i++){
        //find random position
        randomPosition = rand() % 52;
        //do the swap
        tempCard = deck[i];
        deck[i] = deck[randomPosition];
        deck[randomPosition] = tempCard;
        
    }
}

//takes the first 5 cards from a deck
std::vector<card> createHand(std::vector<card>& deck){
    std::vector<card> hand = {deck[0], deck[1], deck[2], deck[3], deck[4]};
//    for(int i = 0; i < 5; i++) {
//        hand.push_back(deck[i]);
//    }
    return hand;
}


//HAVE NOT TESTED THESE YET
//checks to see if cards are all the same suit
bool checkFlush(std::vector<card> hand){
    bool isFlush = false;
    for (int i = 0; i < 4; i++) {
        if(hand[i].suit == hand[i + 1].suit){
            isFlush = true;
        }
    }
    return isFlush;
}

//sorts hand and checks to see if cards in the vector are in numerical order
bool checkStraight(std::vector<card> hand){
    //first create a new vector of just the ranks of the cards
    std::vector<int> justRanks = {};
    for(card c : hand){
        justRanks.push_back(c.rank);
    }
    //then uses the sort function to sort them
    std::sort(justRanks.begin(), justRanks.end());
    //checks to see if the difference between currect position in the vector (i)
    //and the next position in the vector (i + 1) is equal to one
    bool isStraight = false;
    for (int i = 0; i < justRanks.size() - 1; i++) {
        if (justRanks[i + 1] - justRanks[i] == 1) {
            isStraight = true;
        }
    }
    return isStraight;
}

bool checkStraightFlush(std::vector<card> hand){
    return (checkFlush(hand) && checkStraight(hand));
}

bool checkRoyalFlush(std::vector<card> hand){
    return (checkFlush(hand) && checkStraight(hand) && hand[1].rank == 10);
}


