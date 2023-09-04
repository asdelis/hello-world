//
//  BookAnalyzer.cpp
//  BookAnalyzer
//
//  Created by Andrew Delis on 9/1/23.
//

#include "BookAnalyzer.hpp"

//uses a loop to find the sentence that contains the title
//takes that sentence and removes "Title: " from the sentence
std::string findTitle(std::vector<std::string> allSentences){
    bool hasTitle = false;
    std::string titleString;
    for (int i = 0; i < 25; i++){
        if (allSentences[i].substr(0,7) == "Title: ") {
            hasTitle = true;
            titleString = allSentences[i].substr(6, allSentences[i].length());
        }
    }
    if (hasTitle == false){
        std::cout << "Title Unknown";
    }
    return titleString;
}

//uses a loop to find the sentence that contains the author
//takes that sentence and removes "Author: " from the sentence
std::string findAuthor(std::vector<std::string> allSentences){
    bool hasAuthor = false;
    std::string authorString;
    for (int i = 0; i < 25; i++){
        if (allSentences[i].substr(0,8) == "Author: ") {
            hasAuthor = true;
            authorString = allSentences[i].substr(7, allSentences[i].length());
        }
    }
    if (hasAuthor == false) {
        std::cout << "Author Unknown";
    }
    return authorString;
}

//loops through all the words in the book,
//calculates the number of characters in each string,
//and adds them all up
int findCharNum(std::vector<std::string> allWords){
    int totalChar = 0;
    for (int i = 0; i < allWords.size(); i++){
        totalChar += allWords[i].length();
    }
    return totalChar;
}

//ASK ABOUT THIS ONE
//find the smallest word using a loop
std::string findMinWord(std::vector<std::string> allWords){
    std::string minWord;
    int minWordLength = allWords[1].length();
    for (int i = 0; i < allWords.size(); i++){
        if (allWords[i].length() < minWordLength){
            minWordLength = allWords[i].length();
            minWord = allWords[i];
        }
    }
    return minWord;
}


//ASK ABOUT THIS ONE
//find the largest word using a loop
std::string findMaxWord(std::vector<std::string> allWords){
    std::string maxWord;
    int maxWordLength = allWords[1].length();
    for (int i = 0; i < allWords.size(); i++){
        if (allWords[i].length() > maxWordLength){
            maxWordLength = allWords[i].length();
            maxWord = allWords[i];
        }
    }
    return maxWord;
}



