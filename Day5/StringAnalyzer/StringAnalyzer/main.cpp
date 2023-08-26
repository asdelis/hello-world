//
//  main.cpp
//  StringAnalyzer
//
//  Created by Andrew Delis on 8/26/23.
//

#include <iostream>

//Returns whether or not the character is ., ?, or !.
bool IsTerminator(char letter){
    int intFormOfLetter = letter;
    bool isTerm;
    if (intFormOfLetter == 33 || intFormOfLetter == 46 || intFormOfLetter == 63){
        isTerm = true;
    }
    else {
        isTerm = false;
    }
    return isTerm;
}


/*
bool IsPunctuation(char c)
bool IsVowel(char c)
bool IsConsonant(char c)
int NumWords(string s)
int NumSentences(string s)
int NumVowels(string s)
int NumConsonants(string s)
double AverageWordLength(string s)
double AverageVowelsPerWord(string s)
*/

int main(int argc, const char * argv[]) {
    
    //create prompt
    std::string input;
    std::cout << "Enter a string containing one or more sentences: \n";
    std::getline(std::cin, input);
    
    
    
    char letter;
    std::cin >> letter;
    letter = IsTerminator(letter);
    std::cout << letter << "\n";
    
    return 0;
}
