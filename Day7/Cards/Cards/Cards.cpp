//
//  Cards.cpp
//  Cards
//
//  Created by Andrew Delis on 8/29/23.
//

#include "Cards.hpp"
#include <string>


//generate cards
std::vector<card> buildDeck(std::string input){
    //a variable that will store the cards made
    std::vector<card> deck;
    card singleCard;
    std::vector<int> allRank = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    std::vector<std::string> allSuit = {"spade", "heart", "diamond", "club"};
    if (input == "build") {
        for (int i = 0; i < allRank.size(); i++) {
            for(int j = 0; j < allSuit.size(); i++){
                singleCard.rank = i;
                singleCard.suit = j;
                deck.push_back(singleCard);
            }
        }
    }
    return deck;
}




