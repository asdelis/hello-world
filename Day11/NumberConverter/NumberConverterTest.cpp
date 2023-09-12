//
//  NumberConverterTest.cpp
//  NumberConverterTest
//
//  Created by Andrew Delis on 9/5/23.
//

#include "NumberConverter.hpp"

int main(int argc, const char * argv[]) {
    
    //PART 1
    //read in the inputs for the stringToInt function
    std::string input;
    int base;
    std::cout << "Please enter a number in its decimal, hexadecimal, or binary form: \n";
    std::cin >> input;
    std::cout << "Please enter the base of the number entered: \n";
    std::cin >> base;
    //use stringToInt formula to convert num to an integer
    int output;
    output = stringToInt(input, base);
    std::cout << output << "\n";



    //PART 2
    //Integer to Decimal
    int decimalIntInput;
    std::cout << "Please enter another number in its decimal form: \n";
    std::cin >> decimalIntInput;
    std::string decimalString;
    //test intToDecimalString
    if (decimalIntInput >= 0) {
        decimalString = intToDecimalString(decimalIntInput);
        std::cout << decimalString << "\n";
    }
    else {
        decimalString = intToDecimalString(-1 * decimalIntInput);
        std::cout << "-" << decimalString << "\n";
    }
    //Integer to Binary
    int binaryIntInput;
    std::cout << "Please enter another number in its decimal form that you would like converted to binary: \n";
    std::cin >> binaryIntInput;
    std::string binaryString;
    //test intToDecimalString
    if (binaryIntInput >= 0) {
        binaryString = intToBinaryString(binaryIntInput);
        std::cout << binaryString << "\n";
    }
    else {
        binaryString = intToBinaryString(-1 * binaryIntInput);
        std::cout << "-" << binaryString << "\n";
    }
    //Integer to Hex
    int hexIntInput;
    std::cout << "Please enter another number in its decimal form that you would like converted to hexadecimal: \n";
    std::cin >> hexIntInput;
    std::string hexString;
    //test intToDecimalString
    if (hexIntInput >= 0) {
        hexString = intToHexString(hexIntInput);
        std::cout << hexString << "\n";
    }
    else {
        hexString = intToHexString(-1 * hexIntInput);
        std::cout << "-" << hexString << "\n";
    }
    
    return 0;
}
