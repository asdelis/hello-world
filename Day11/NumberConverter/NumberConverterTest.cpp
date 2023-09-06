//
//  NumberConverterTest.cpp
//  NumberConverterTest
//
//  Created by Andrew Delis on 9/5/23.
//

#include "NumberConverter.hpp"

int main(int argc, const char * argv[]) {
    
//    //DOESN'T WORK FOR NEGATIVE NUMBERS RN
//    //PART 1
//    //read in the inputs for the stringToInt function
//    std::string num;
//    int base;
//    std::cout << "Please enter a number in its decimal, hexadecimal, or binary form: \n";
//    std::cin >> num;
//    std::cout << "Please enter the base of the number entered: \n";
//    std::cin >> base;
//    //use stringToInt formula to convert num to an integer
//    int output;
//    output = stringToInt(num, base);
//    std::cout << output << "\n";
    
    //PART 2
    int numTwo;
    std::cout << "Please enter another number in its decimal form: \n";
    std::cin >> numTwo;
    //test intToDecimalString
    std::string decimalString;
    decimalString = intToBinaryString(numTwo);
    std::cout << decimalString << "\n";
    
    
    
    return 0;
}
