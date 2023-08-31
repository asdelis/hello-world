//
//  Poker.hpp
//  Poker
//
//  Created by Andrew Delis on 8/30/23.
//

#ifndef Poker_hpp
#define Poker_hpp

#include <stdio.h>

#endif /* Poker_hpp */

#pragma once
#include <stdio.h>
#include <string>
#include <iostream>
#include <cstdlib>
#include <algorithm>

//a simple struct for cards that holds rank and stuit
struct card{
    std::string suit;
    int rank;
};

//builds a deck of cards based on an input
std::vector<card> createDeck(std::vector<card> deck);

//prints out a deck of cards
void printCardsInDeck(const std::vector<card>& deck);

//shuffles the deck of cards
void shuffleDeck (std::vector<card>& deck);

//creates a hand
std::vector<card> createHand(std::vector<card>& deck);

//checks to see if cards in a vector are all the same suit
bool checkFlush(std::vector<card> hand);

//sorts all the ranks of a vector of cards
std::vector<int> sortCardRank(std::vector<card> hand);

//checks to see if cards in a vector are in numerical order
bool checkStraight(std::vector<card> hand);

//checks to see if a hand meets both the checkStraight and checkFlush criteria
bool checkStraightFlush(std::vector<card> hand);

//checks if the hand passes the checkStraightFlush
//and whether the first positions rank is 10
bool checkRoyalFlush(std::vector<card> hand);

//bool checkFullHouse(std::vector<card> hand);
