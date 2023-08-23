//
//  main.cpp
//  ForLoopPractice
//
//  Created by Andrew Delis on 8/23/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    //A for loop seemed more appropriate here
    //because I wrote a little less code
    
    //making the for loop and printing it out per loop through
    for ( int x = 0; x <= 10; x = x + 1 ){
        std::cout << x;
    }
    //variable
    int num = 0;
    //making the while loop and printing it out per loop through
    while (num < 10){
        num = num + 1;
        std::cout << num;
    }
    
    //next part
    
    //creating variables
    int input1;
    int input2;
    //creating prompts for the user to enter two numbers
    std::cout << "\nEnter any whole number.\n";
    std::cin >> input1;
    std::cout << "Enter any other whole number larger than your first answer.\n";
    std::cin >> input2;
    //creating a while loop in the if statement
    if (input1 < input2) {
        while (input1 < input2){
            input1 = input1 + 1;
            std::cout << input1;
        }
    }
    else {
        while (input1 > input2){
            input1 = input1 - 1;
            std::cout << input1;
        }
    }
    
    //next part
    
    num = 0;
    
    
    
    return 0;
}
