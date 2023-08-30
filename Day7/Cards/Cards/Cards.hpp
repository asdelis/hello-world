//
//  Cards.hpp
//  Cards
//
//  Created by Andrew Delis on 8/29/23.
//

#ifndef Cards_hpp
#define Cards_hpp

#pragma once
#include <stdio.h>
#include <string>
#include <iostream>

#endif /* Cards_hpp */

//a simple struct for cards that holds rank and stuit
struct card{
    std::string suit;
    int rank;
};

//builds a deck of cards based on an input
std::vector<card> buildDeck(std::vector<card> deck);

//prints out a deck of cards
void printCardsInDeck(std::vector<card> deck);

