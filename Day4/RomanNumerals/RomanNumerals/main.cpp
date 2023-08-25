//
//  main.cpp
//  RomanNumerals
//
//  Created by Andrew Delis on 8/24/23.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    
    //creating an input variable
    //and a variable for the remainder
    int input;
    int num;
    int remainder;
    
    //creating a string for the roman numerals
    std::string romNum;
    
    //first prompt
    std::cout << "Enter decimal number" << "\n";
    std::cin >> input;

    //check to see if input is greater than zero
    if (input > 0){
        
        //check to see if the input is greater than or equal to
        //1000 so we can check if there are any M's in there
        
        //loops through and concatinates the num number of M's
        
        //calculates the remainder so we can use
        //it for the next sequence instead of input
        
        if (input >= 1000){
            num = input / 1000;
            for (int i = 0; i < num; i++){
                romNum += "M";
            }
        }
        remainder = input % 1000;
        
        //repeating the process above for the over roman numerals
        
        //CM
        if (remainder >= 900){
            num = remainder / 900;
            for (int i = 0; i < num; i++){
                romNum += "CM";
            }
        }
        remainder = input % 900;
        
        //D
        if (remainder >= 500){
            num = remainder / 500;
            for (int i = 0; i < num; i++){
                romNum += "D";
            }
        }
        remainder = input % 500;
        
        //CD
        if (remainder >= 400){
            num = remainder / 400;
            for (int i = 0; i < num; i++){
                romNum += "CD";
            }
        }
        remainder = input % 400;
        
        //C
        if (remainder >= 100){
            num = remainder / 100;
            for (int i = 0; i < num; i++){
                romNum += "C";
            }
        }
        remainder = input % 100;
        
        //XC
        if (remainder >= 90){
            num = remainder / 90;
            for (int i = 0; i < num; i++){
                romNum += "XC";
            }
        }
        remainder = input % 90;
        
        //L
        if (remainder >= 50){
            num = remainder / 50;
            for (int i = 0; i < num; i++){
                romNum += "L";
            }
        }
        remainder = input % 50;
        
        //XL
        if (remainder >= 40){
            num = remainder / 40;
            for (int i = 0; i < num; i++){
                romNum += "XL";
            }
        }
        remainder = input % 40;
        
        //X
        if (remainder >= 10){
            num = remainder / 10;
            for (int i = 0; i < num; i++){
                romNum += "X";
            }
        }
        remainder = input % 10;
        
        //IX
        if (remainder >= 9){
            num = remainder / 9;
            for (int i = 0; i < num; i++){
                romNum += "IX";
            }
        }
        remainder = input % 9;
        
        //V
        if (remainder >= 5){
            num = remainder / 5;
            for (int i = 0; i < num; i++){
                romNum += "V";
            }
        }
        remainder = input % 5;
        
        //IV
        if (remainder >= 4){
            num = remainder / 4;
            for (int i = 0; i < num; i++){
                romNum += "IV";
            }
        }
        remainder = input % 4;
        
        //I
        if (remainder >= 1){
            num = remainder / 1;
            for (int i = 0; i < num; i++){
                romNum += "I";
            }
        }
    }
    else {
        std::cout << "Invalid Input";
    }
    
    std::cout << romNum << "\n";
    
    return 0;
}
