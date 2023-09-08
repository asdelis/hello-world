//
//  NumberConverterTest.cpp
//  NumberConverterTest
//
//  Created by Andrew Delis on 9/5/23.
//

#include "NumberConverter.hpp"

int main(int argc, const char * argv[]) {
    
//    //DOESN'T WORK FOR NEGATIVE HEX NUMBERS RN
//    //PART 1
//    //read in the inputs for the stringToInt function
//    std::string input;
//    int base;
//    std::cout << "Please enter a number in its decimal, hexadecimal, or binary form: \n";
//    std::cin >> input;
//    std::cout << "Please enter the base of the number entered: \n";
//    std::cin >> base;
//    //use stringToInt formula to convert num to an integer
//    int output;
//    output = stringToInt(input, base);
//    std::cout << output << "\n";
//
//
//
//    //PART 2
//    int decimalIntInput;
//    std::cout << "Please enter another number in its decimal form: \n";
//    std::cin >> decimalIntInput;
//    //test intToDecimalString
//    std::string decimalString;
//    decimalString = intToDecimalString(decimalIntInput);
//    std::cout << decimalString << "\n";
//
//    int binaryIntInput = 12;
//    std::cout << "Please enter another number in its decimal form: \n";
//    std::cin >> binaryIntInput;
//    //test intToDecimalString
//    std::string binaryString;
//    binaryString = intToBinaryString(binaryIntInput);
//    std::cout << binaryString << "\n";
    
    int hexIntInput = 12;
    std::cout << "Please enter another number in its decimal form: \n";
    std::cin >> hexIntInput;
    //test intToDecimalString
    std::string hexString;
    hexString = intToBinaryString(hexIntInput);
    std::cout << hexString << "\n";
    
    
    
    
    
    
    return 0;
}
