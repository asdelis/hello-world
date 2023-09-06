//
//  NumberConverter.cpp
//  NumberConverter
//
//  Created by Andrew Delis on 9/5/23.
//

#include "NumberConverter.hpp"

//converts the string of numbers into integers with their real value (not ascii)
//Uses a loop and the base ^ place * placeHolder formula to calculate the value
int stringToInt(std::string num, int base) {
    int  numValue = 0;
    for (int i = 0; i < num.length(); i++) {
        //an if to determine whether the character is a letter
        if (tolower(num[i]) >= 'a' && tolower(num[i]) <= 'z'){
            //converts their ascii value to their real value (formula given)
            int realValue = tolower(num[i]) - 'a' + 10;
            //formula to find the decimal value of the number entered
            numValue += (pow(base, (num.length() - 1 - i))) * realValue;
        }
        //same as above except this is for the characters that are numbers
        else {
            int realValue = num[i] - '0';
            numValue += (pow(base, (num.length() - 1 - i))) * realValue;
        }
        
    }
    return numValue;
}


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


