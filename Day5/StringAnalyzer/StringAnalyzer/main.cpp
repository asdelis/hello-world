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

//Returns whether or not the character is ., ?, !, or ,.
bool IsPunctuation(char letter){
    int intFormOfLetter = letter;
    bool isPunc;
    if (intFormOfLetter == 33 || intFormOfLetter == 44 || intFormOfLetter == 46 || intFormOfLetter == 63 ){
        isPunc = true;
    }
    else {
        isPunc = false;
    }
    return isPunc;
}

//Returns whether or not the character is a vowel.
bool IsVowel(char letter){
    int intFormOfLetter = letter;
    bool isVwl;
    if (intFormOfLetter == 65 || intFormOfLetter == 97 || intFormOfLetter == 69 || intFormOfLetter == 101 || intFormOfLetter == 73 || intFormOfLetter == 105 || intFormOfLetter == 79 || intFormOfLetter == 111 || intFormOfLetter == 85 || intFormOfLetter == 117 || intFormOfLetter == 89 || intFormOfLetter == 121){
        isVwl = true;
    }
    else {
        isVwl = false;
    }
    return isVwl;
}

//Returns whether or not the character is a consonant.
bool IsConsonant(char letter){
    int intFormOfLetter = letter;
    bool isCon;
    if (IsPunctuation(intFormOfLetter) == false && IsVowel(intFormOfLetter) == false){
        isCon = true;
    }
    else {
        isCon = false;
    }
    return isCon;
}

//Returns the number of words in the string.
//int NumWords(std::string string){
    
//}

//int NumSentences(std::string string){
    //int sentenceCount
    
//}

/*
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
    
    //will print the string if you type "done"
    
    //Test that my first function (isTerminator) works
    //It did worked and returned a 0 for false and 1 for true
    /*
    char letter = input.front();
    bool isTerm;
    isTerm = IsTerminator(letter);
    std::cout << isTerm << "\n";
     */
    
    //loop through the string above
    for (int i = input.length()-1; i >= input.length(); i++) {
        
    }
    
    
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
