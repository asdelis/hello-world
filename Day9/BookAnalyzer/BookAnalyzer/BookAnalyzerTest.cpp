//
//  BookAnalyzerTest.cpp
//  BookAnalyzerTest
//
//  Created by Andrew Delis on 9/1/23.
//

#include "BookAnalyzer.hpp"

int main(int argc, const char * argv[]) {

    //read in a file from the keyboard
    std::string fileName;
    std::cout << "Please enter file you would like analyzed.\n";
    std::getline(std::cin, fileName);
    std::ifstream inFileStream(fileName);
    
    std::string inputWord;
    std::cout << "Please enter a word you would like analyzed.\n";
    std::cin >> inputWord;
    
    //send an error message if the wrong one is typed in
    if (inFileStream.fail()) {
        std::cout << "Failed to open file:" << fileName << ".\n";
        exit(1);
    }
    
    //making a vector of all the words in the book
    std::string singleWord;
    std::vector<std::string> allWords;
    while (inFileStream >> singleWord) {
        allWords.push_back(singleWord);
    }
    
    //reset file stream to top of file
    inFileStream.clear();
    inFileStream.seekg(0, std::ios::beg);

    //making a vector of all the sentences in the book
    std::string singleSentence;
    std::vector<std::string> allSentences;
    while (std::getline(inFileStream, singleSentence, '\n')) {
        allSentences.push_back(singleSentence);
    }
    
    //close the file
    inFileStream.close();
    
    //outputs
    std::cout << "Statistics for" << findTitle(allSentences);
    std::cout << "by" << findAuthor(allSentences);
    std::cout << "  Number of words: " << allWords.size() << "\n";
    std::cout << "  Number of characters: " << findCharNum(allWords) << "\n";
    std::cout << "  The shortest word is: " << findMinWord(allWords) << "\n";
    std::cout << "  The largest word is: " << findMaxWord(allWords) << "\n";
    std::cout << "The word " << inputWord << " appears " << countInputWord(allWords, inputWord) << " times: \n";
    printSurroundingWords(allWords, inputWord);
    
    
    return 0;
}



