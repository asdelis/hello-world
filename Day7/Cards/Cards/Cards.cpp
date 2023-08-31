//
//  Cards.cpp
//  Cards
//
//  Created by Andrew Delis on 8/29/23.
//

#include "Cards.hpp"

//generate cards
//no input, just outputs a deck of cards
std::vector<card> buildDeck(std::vector<card> deck){
    
    //a variable that will store the individual cards
    //the vectors that the function will use to generate the cards
    std::vector<std::string> allSuit = {"spade", "heart", "diamond", "club"};
    std::vector<int> allRank = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    
    //a double loop that matches all ranks to suits as a card
    //and stores it in a vector
    for (int i = 0; i < allSuit.size(); i++) {
        for(int j = 0; j < allRank.size(); j++){
            card singleCard = {allSuit[i], allRank[j]};
            deck.push_back(singleCard);
        }
    }
    return deck;
}

//no output just prints the cards in the deck
void printCardsInDeck( std::vector<card> deck){
    for (card singleCard : deck) {
        std::cout << singleCard.suit << " ";
        if (singleCard.rank == 1) {
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



