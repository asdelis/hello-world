//
//  main.cpp
//  StringAnalyzer
//
//  Created by Andrew Delis on 8/26/23.
//

#include <iostream>

//Returns whether or not the character is ., ?, or !.
//char -> bool
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
//char -> bool
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
//char -> bool
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

//Returns whether or not the character is a space.
//char -> bool
bool IsSpace(char letter){
    bool isSpa;
    if (letter == ' '){
        isSpa = true;
    }
    return isSpa;
}

//Returns whether or not the character is a consonant.
//char -> bool
bool IsConsonant(char letter){
    int intFormOfLetter = letter;
    bool isCon;
    if (IsPunctuation(intFormOfLetter) == false && IsVowel(intFormOfLetter) == false && IsTerminator(intFormOfLetter) == false && IsSpace(letter) == false){
        isCon = true;
    }
    else {
        isCon = false;
    }
    return isCon;
}

//Returns the number of words in the string.
//string -> int
int NumWords(std::string inputString){
    int numWrd = 0;
    for (int i = 0; i < inputString.length(); i++) {
        if (inputString[i] == ' ') {
            numWrd += 1;
        }
    }
    return numWrd + 1;
}

//Returns the number of sentences in the string.
//string -> int
int NumSentences(std::string inputString){
    int numSentence = 0;
    for (int i = 0; i < inputString.length(); i++) {
        if (IsTerminator(inputString[i]) == true) {
            numSentence += 1;
        }
    }
    return numSentence;
}

//Returns the number of vowels in the string.
//string -> int
int NumVowels(std::string inputString){
    int numVowels = 0;
    for (int i = 0; i < inputString.length(); i++) {
        if (IsVowel(inputString[i]) == true) {
            numVowels += 1;
        }
    }
    return numVowels;
}

//Returns the number of consonants in the string.
//string -> int
int NumConsonants(std::string inputString){
    int numConso = 0;
    for (int i = 0; i < inputString.length(); i++) {
        if (IsConsonant(inputString[i]) == true) {
            numConso += 1;
        }
    }
    return numConso;
}

//Returns the average length of all words in the string.
//((number of vowels + number of consonants) / number of words)
//string -> double
double AverageWordLength(std::string inputString){
    double numVwl = NumVowels(inputString);
    double numConso = NumVowels(inputString);
    double numWrd = NumWords(inputString);
    double avgWordLength;
    avgWordLength = (numVwl + numConso) / numWrd;
    return avgWordLength;
}

double AverageVowelsPerWord(std::string inputString){
    double numVwl = NumVowels(inputString);
    double numWrds = NumWords(inputString);
    double avgVowelsPerWord;
    avgVowelsPerWord = numVwl / numWrds;
    return avgVowelsPerWord;
}

//Main
int main(int argc, const char * argv[]) {
    
    //create prompt
    std::string input;
    std::cout << "Enter a string containing one or more sentences: \n";
    
    //while loop for the input
    while (input != "done") {
        std::getline(std::cin, input);
        if (input == "done") {
            break;
        }
    }
    
    //calling all my functions
    //Number of Words
    std::cout << " Number of words: " << NumWords(input)<< "\n";
    
    //Number of Sentences
    std::cout << " Number of sentences: " << NumSentences(input)<< "\n";
    
    //Number of vowels
    std::cout << " Number of vowels: " << NumVowels(input) << "\n";
    
    //Number of consonants
    std::cout << " Number of consonants: " << NumConsonants(input) << "\n";
    
    //Reading level
    std::cout << " Reading level (average word length): " << AverageWordLength(input) << "\n";
    
    //Average vowels
    std::cout << " Average vowels per word: " << AverageVowelsPerWord(input) << "\n";
    
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
