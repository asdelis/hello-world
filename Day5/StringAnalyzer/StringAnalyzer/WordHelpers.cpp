//
//  WordHelpers.cpp
//  StringAnalyzer
//
//  Created by Andrew Delis on 8/28/23.
//

#include "WordHelpers.hpp"
#include "LettersHelpers.hpp"

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
    avgWordLength = ((numVwl + numConso) / numWrd);
    return avgWordLength;
}

double AverageVowelsPerWord(std::string inputString){
    double numVwl = NumVowels(inputString);
    double numWrds = NumWords(inputString);
    double avgVowelsPerWord;
    avgVowelsPerWord = numVwl / numWrds;
    return avgVowelsPerWord;
}
