//
//  BookAnalyzer.hpp
//  BookAnalyzer
//
//  Created by Andrew Delis on 9/1/23.
//

#ifndef BookAnalyzer_hpp
#define BookAnalyzer_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <cstdlib>

#endif /* BookAnalyzer_hpp */


//print title of the book (see below)
std::string findTitle(std::vector<std::string> allSentences);

//print author of the book (see below)
std::string findAuthor(std::vector<std::string> allSentences);

//print total number of characters in the file (excluding whitespace).
int findCharNum(std::vector<std::string> allWords);

//print shortest word in the book
std::string findMinWord(std::vector<std::string> allWords);

//print longest word in the book
std::string findMaxWord(std::vector<std::string> allWords);

//print number of appearances of the users key word
int countInputWord(std::vector<std::string> allWords, std::string inputWord);

//print the locations of the users key word and the two surrounding words
void printSurroundingWords(std::vector<std::string> allWords, std::string inputWord);
