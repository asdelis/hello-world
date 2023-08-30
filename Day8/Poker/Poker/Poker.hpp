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

//a simple struct for cards that holds rank and stuit
struct card{
    std::string suit;
    int rank;
};

//builds a deck of cards based on an input
std::vector<card> buildDeck(std::vector<card> deck);

//prints out a deck of cards
void printCardsInDeck(const std::vector<card>& deck);

//shuffles the deck of cards randomly
void shuffleDeck (std::vector<card>& deck);


