//
//  NumberConverter.cpp
//  NumberConverter
//
//  Created by Andrew Delis on 9/5/23.
//

#include "NumberConverter.hpp"

//PART 1
//converts the string of numbers into integers with their real value (not ascii)
//Uses a loop and the base ^ exponent * placeHolder formula to calculate the value
int stringToInt(std::string input, int base) {
    int numValue = 0;
    //first see if the number is negative
    //binary and hexadecimal numbers can't be made negative with this sign: '-'
    //so we only need to check this for decimal numbers entered into our string
    if (input[0] == '-') {
        for (int i = 1; i < input.length(); i++) {
            //converts their ascii value to their real value (formula given)
            int realValue = (input[i] - '0') * (-1);
            //formula to find the decimal value of the number entered
            numValue += (pow(base, (input.length() - 1 - i))) * realValue;
        }
    }
    //same process for positive numbers
    else {
        //except there is a need to determine whether the character is a letter
        //so there is an if statement in the loop for positive numbers
        for (int i = 0; i < input.length(); i++) {
            if (tolower(input[i]) >= 'a' && tolower(input[i]) <= 'z'){
                //converts their ascii value to their real value
                //(different formula for non-numerical characters given too)
                int realValue = tolower(input[i]) - 'a' + 10;
                //formula changes a little bit too
                //since the numbers are now positive (signs, realValue equation)
                numValue += (pow(base, (input.length() - 1 - i))) * realValue;
            }
            else {
                int realValue = input[i] - '0';
                numValue += (pow(base, (input.length() - 1 - i))) * realValue;
            }
        }
    }
    return numValue;
}

//PART 2
std::string intToDecimalString(int decimalIntInput){
    //create a string
    std::string initialString = "";
    //initalize piece as the full amount, this will update everytime the loop ends
    int piece = decimalIntInput;
    while (piece > 0) {
        //calculate the remainder
        //which will be the value in the lowest place of the input integer numTwo
        int remainder = piece % 10;
        //make remainder a character
        char remainderChar = remainder + '0';
        //add that character to the string
        initialString += remainderChar;
        //update piece
        piece /= 10;
    }
    //create a new vector that we can use to reverse the order of decimalString
    std::string outputString;
    //loop through the string and reverse its order
    for (int i = initialString.length(); i >= 0 ; i--) {
        outputString += initialString[i];
    }
    //return the new string
    return outputString;
}

std::string intToBinaryString(int binaryIntInput){
    std::string initialString = "";
    int piece = binaryIntInput;
    while (piece > 0) {
        int remainder = piece % 2;
        char remainderChar = remainder + '0';
        initialString += remainderChar;
        piece /= 2;
    }
    std::string outputString;
    for (int i = initialString.length(); i >= 0 ; i--) {
        outputString += initialString[i];
    }
    return outputString;
}
