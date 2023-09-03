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
    std::ifstream myStream(fileName);
    //send an error message if the wrong one is typed in
    if (myStream.fail()) {
        std::cout << "Failed to open file:" << fileName << ".\n";
        exit(1);
    }
    
    //read in the whole file
    std::string word1;
    while (myStream >> word1) {
        std::cout << "Read in: " << word1 << "\n";
    }
    
    
    
    
    return 0;
}




