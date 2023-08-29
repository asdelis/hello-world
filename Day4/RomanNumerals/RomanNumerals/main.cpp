//
//  main.cpp
//  RomanNumerals
//
//  Created by Andrew Delis on 8/24/23.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    
    //created an input variable (input)
    //and a variable that will count how many times a roman numeral is in our input (count)
    int input;
    int loopCount;
    
    //created a string to use for our output of the final result
    std::string romNum;
    
    //first prompt
    std::cout << "Enter decimal number" << "\n";
    std::cin >> input;

    //check to see if input is greater than zero and less than 9999
    //print invalid result if it is
    if (input > 0 && input <= 9999){
        
        //check to see if the input is greater than or equal to
        //1000 so we can check if there are any M's in there
        //loop through and concatinates the num number of M's to romNum
        //recalculate the input so we can use it to find the next roman numeral's num
        if (input >= 1000){
            loopCount = input / 1000;
            for (int i = 0; i < loopCount; i++){
                romNum += "M";
            }
        }
        input = input % 1000;
        
        //repeating the process above for the other roman numerals
        //CM
        if (input >= 900){
            loopCount = input / 900;
            for (int i = 0; i < loopCount; i++){
                romNum += "CM";
            }
        }
        input = input % 900;
        //D
        if (input >= 500){
            loopCount = input / 500;
            for (int i = 0; i < loopCount; i++){
                romNum += "D";
            }
        }
        input = input % 500;
        //CD
        if (input >= 400){
            loopCount = input / 400;
            for (int i = 0; i < loopCount; i++){
                romNum += "CD";
            }
        }
        input = input % 400;
        //C
        if (input >= 100){
            loopCount = input / 100;
            for (int i = 0; i < loopCount; i++){
                romNum += "C";
            }
        }
        input = input % 100;
        //XC
        if (input >= 90){
            loopCount = input / 90;
            for (int i = 0; i < loopCount; i++){
                romNum += "XC";
            }
        }
        input = input % 90;
        //L
        if (input >= 50){
            loopCount = input / 50;
            for (int i = 0; i < loopCount; i++){
                romNum += "L";
            }
        }
        input = input % 50;
        //XL
        if (input >= 40){
            loopCount = input / 40;
            for (int i = 0; i < loopCount; i++){
                romNum += "XL";
            }
        }
        input = input % 40;
        //X
        if (input >= 10){
            loopCount = input / 10;
            for (int i = 0; i < loopCount; i++){
                romNum += "X";
            }
        }
        input = input % 10;
        //IX
        if (input >= 9){
            loopCount = input / 9;
            for (int i = 0; i < loopCount; i++){
                romNum += "IX";
            }
        }
        input = input % 9;
        //V
        if (input >= 5){
            loopCount = input / 5;
            for (int i = 0; i < loopCount; i++){
                romNum += "V";
            }
        }
        input = input % 5;
        //IV
        if (input >= 4){
            loopCount = input / 4;
            for (int i = 0; i < loopCount; i++){
                romNum += "IV";
            }
        }
        input = input % 4;
        //I
        if (input >= 1){
            loopCount = input / 1;
            for (int i = 0; i < loopCount; i++){
                romNum += "I";
            }
        }
    }
    else {
        std::cout << "Invalid Input";
    }
    
    //output the concatinated results
    std::cout << romNum << "\n";
    
    return 0;
}
