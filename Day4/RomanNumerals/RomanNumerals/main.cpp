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
    //and a variable that will count how many times a roman numeral is in our input
    int input;
    int num;
    
    //creating a string to use for our output of the final result
    std::string romNum;
    
    //first prompt
    std::cout << "Enter decimal number" << "\n";
    std::cin >> input;

    //check to see if input is greater than zero
    //print invalid result if it is
    if (input > 0){
        
        //check to see if the input is greater than or equal to
        //1000 so we can check if there are any M's in there
        
        //loops through and concatinates the num number of M's to romNum
        
        //recalculate the input so we can use it to find the next roman numeral's num
        
        if (input >= 1000){
            num = input / 1000;
            for (int i = 0; i < num; i++){
                romNum += "M";
            }
        }
        input = input % 1000;
        
        //repeating the process above for the other roman numerals
        
        //CM
        if (input >= 900){
            num = input / 900;
            for (int i = 0; i < num; i++){
                romNum += "CM";
            }
        }
        input = input % 900;
        
        //D
        if (input >= 500){
            num = input / 500;
            for (int i = 0; i < num; i++){
                romNum += "D";
            }
        }
        input = input % 500;
        
        //CD
        if (input >= 400){
            num = input / 400;
            for (int i = 0; i < num; i++){
                romNum += "CD";
            }
        }
        input = input % 400;
        
        //C
        if (input >= 100){
            num = input / 100;
            for (int i = 0; i < num; i++){
                romNum += "C";
            }
        }
        input = input % 100;
        
        //XC
        if (input >= 90){
            num = input / 90;
            for (int i = 0; i < num; i++){
                romNum += "XC";
            }
        }
        input = input % 90;
        
        //L
        if (input >= 50){
            num = input / 50;
            for (int i = 0; i < num; i++){
                romNum += "L";
            }
        }
        input = input % 50;
        
        //XL
        if (input >= 40){
            num = input / 40;
            for (int i = 0; i < num; i++){
                romNum += "XL";
            }
        }
        input = input % 40;
        
        //X
        if (input >= 10){
            num = input / 10;
            for (int i = 0; i < num; i++){
                romNum += "X";
            }
        }
        input = input % 10;
        
        //IX
        if (input >= 9){
            num = input / 9;
            for (int i = 0; i < num; i++){
                romNum += "IX";
            }
        }
        input = input % 9;
        
        //V
        if (input >= 5){
            num = input / 5;
            for (int i = 0; i < num; i++){
                romNum += "V";
            }
        }
        input = input % 5;
        
        //IV
        if (input >= 4){
            num = input / 4;
            for (int i = 0; i < num; i++){
                romNum += "IV";
            }
        }
        input = input % 4;
        
        //I
        if (input >= 1){
            num = input / 1;
            for (int i = 0; i < num; i++){
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
