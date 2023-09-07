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
    int  numValue = 0;
    //first see if the number is negative
    if (std::stoi(num) < 0) {
        //if so enter this first loop
        for (int i = 1; i < num.length(); i++) {
            //an if to determine whether the character is a letter
            if (tolower(num[i]) >= 'a' && tolower(num[i]) <= 'z'){
                //converts their ascii value to their real value (formula given)
                int realValue = tolower(num[i]) - 'a' + 10;
                //formula to find the decimal value of the number entered
                numValue -= (pow(base, (num.length() - 1 - i))) * realValue;
            }
            //same as above except this is for the characters that are numbers
            //since their ascii conversion needs to follow a different formula
            else {
                int realValue = num[i] - '0';
                numValue -= (pow(base, (num.length() - 1 - i))) * realValue;
            }
        }
    }
    else {
        for (int i = 0; i < num.length(); i++) {
            if (tolower(num[i]) >= 'a' && tolower(num[i]) <= 'z'){
                int realValue = tolower(num[i]) - 'a' + 10;
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
    int decimal = numTwo;
    while (decimal > 1) {
        int remainder = decimal % 2;
        char remainderChar = remainder + '0';
        decimalString += remainderChar;
        decimal = decimal / 2;
    }
    return decimalString;
}


