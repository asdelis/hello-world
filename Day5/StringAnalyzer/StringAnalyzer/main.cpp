//
//  main.cpp
//  StringAnalyzer
//
//  Created by Andrew Delis on 8/26/23.
//

#include <iostream>
#include "LettersHelpers.hpp"
#include "WordHelpers.hpp"

//Main
int main(int argc, const char * argv[]) {
    
    //create prompt
    std::string input;
    std::string fullString;
    std::cout << "Enter a string containing one or more sentences: \n";
    
    //while loop for the input
    while (input != "done") {
        std::getline(std::cin, input);
        fullString += input;
        if (input == "done") {
            break;
        }
    }
    
    //calling all my functions
    //Number of Words
    std::cout << " Number of words: " << NumWords(fullString)<< "\n";
    
    //Number of Sentences
    std::cout << " Number of sentences: " << NumSentences(fullString)<< "\n";
    
    //Number of vowels
    std::cout << " Number of vowels: " << NumVowels(fullString) << "\n";
    
    //Number of consonants
    std::cout << " Number of consonants: " << NumConsonants(fullString) << "\n";
    
    //Reading level
    std::cout << " Reading level (average word length): " << AverageWordLength(fullString) << "\n";
    
    //Average vowels
    std::cout << " Average vowels per word: " << AverageVowelsPerWord(fullString) << "\n";
    
    /*
     Example
     Enter a string containing one or more sentences: (done)
     Here is sentence number one. Here is sentence number two!
     Analysis:
      Number of words: 10
      Number of sentences: 2
      Number of vowels: 19
      Number of consonants: 27
      Reading level (average word length): 4.6
      Average vowels per word: 1.9
    */
    
    return 0;
}
