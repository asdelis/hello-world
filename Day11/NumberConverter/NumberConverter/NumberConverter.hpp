//
//  NumberConverter.hpp
//  NumberConverter
//
//  Created by Andrew Delis on 9/5/23.
//

#ifndef NumberConverter_hpp
#define NumberConverter_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>

#endif /* NumberConverter_hpp */

//checks to see if the num is a character
bool isCharacter(std::string num);

//checks to see if the num is positive
bool isPositive(std::string num);

//a function that takes a string of numbers and the base of the number,
//and outputs the decimal version of the number as an integer
int stringToInt(std::string num, int base);

//converts an integer to a decimal string
std::string intToBinaryString(int decimal);

