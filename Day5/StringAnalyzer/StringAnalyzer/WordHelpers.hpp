//
//  WordHelpers.hpp
//  StringAnalyzer
//
//  Created by Andrew Delis on 8/28/23.
//

#ifndef WordHelpers_hpp
#define WordHelpers_hpp

#include <stdio.h>
#include <string>

int NumWords(std::string inputString);
int NumSentences(std::string inputString);
int NumVowels(std::string inputString);
int NumConsonants(std::string inputString);
double AverageWordLength(std::string inputString);
double AverageVowelsPerWord(std::string inputString);


#endif /* WordHelpers_hpp */
