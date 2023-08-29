//
//  LettersHelpers.cpp
//  StringAnalyzer
//
//  Created by Andrew Delis on 8/28/23.
//

#include "LettersHelpers.hpp"

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
