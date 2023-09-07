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
int stringToInt(std::string num, int base) {
    int numValue = 0;
    //first see if the number is negative
    //binary and hexadecimal numbers can't be made negative with this sign: '-'
    //so we only need to check this for decimal numbers entered into our string
    if (num[0] == '-') {
        for (int i = 1; i < num.length(); i++) {
            //converts their ascii value to their real value (formula given)
            int realValue = (num[i] - '0') * (-1);
            //formula to find the decimal value of the number entered
            numValue += (pow(base, (num.length() - 1 - i))) * realValue;
        }
    }
    //same process for positive numbers
    else {
        //except there is a need to determine whether the character is a letter
        //so there is an if statement in the loop for positive numbers
        for (int i = 0; i < num.length(); i++) {
            if (tolower(num[i]) >= 'a' && tolower(num[i]) <= 'z'){
                //converts their ascii value to their real value
                //(different formula for non-numerical characters given too)
                int realValue = tolower(num[i]) - 'a' + 10;
                //formula changes a little bit too
                //since the numbers are now positive (signs, realValue equation)
                numValue += (pow(base, (num.length() - 1 - i))) * realValue;
            }
            else {
                int realValue = num[i] - '0';
                numValue += (pow(base, (num.length() - 1 - i))) * realValue;
            }
        }
    }
    return numValue;
}

//PART 2
std::string intToBinaryString(int numTwo){
    std::string decimalString = "";
    int updatedNum = numTwo;
    while (updatedNum > 0) {
        int remainder = updatedNum % 10;
        char remainderChar = remainder + '0';
        decimalString += remainderChar;
        updatedNum /= 10;
    }
    std::string realDecimalString;
    for (int i = decimalString.length(); i >= 0 ; i--) {
        realDecimalString += decimalString[i];
    }
    return realDecimalString;
}
