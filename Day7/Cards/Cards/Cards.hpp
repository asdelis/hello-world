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

#endif /* Cards_hpp */

//a simple struct for cards that holds rank and stuit
struct card{
    int rank;
    std::string suit;
};

//builds a deck of cards based on an input
std::vector<card> buildDeck(std::string input);

//prints out a deck of cards
card printDeck(std::vector<card>);

