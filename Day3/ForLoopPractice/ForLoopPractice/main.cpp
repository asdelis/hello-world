//
//  main.cpp
//  ForLoopPractice
//
//  Created by Andrew Delis on 8/23/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    //A for loop seemed more appropriate here because I wrote a little less code
    
    //making the for loop and printing it out per loop through
    for ( int x = 0; x <= 10; x = x + 1 ){
        std::cout << x << "\n";
    }
    //variable
    int num = 0;
    //making the while loop and printing it out per loop through
    while (num < 10){
        num = num + 1;
        std::cout << num << "\n";
    }
    
    //next part
    
    //creating variables
    int input1;
    int input2;
    //creating prompts for the user to enter two numbers
    std::cout << "\nEnter any whole number.\n";
    std::cin >> input1;
    std::cout << "Enter any other whole number.\n";
    std::cin >> input2;
    //creating a while loop in the if statement to add
    //qualifiers that will determine which program to run
    if (input1 < input2) {
        while (input1 < input2){
            std::cout << input1 << "\n";
            input1 = input1 + 1;
            
        }
    }
    else {
        while (input1 > input2){
            std::cout << input1 << "\n";
            input1 = input1 - 1;
            
        }
    }
    std::cout << input1 << "\n";
    //next part
    
    //using a for loop to find every other number starting with 1
    for ( int y = 1; y <= 20; y = y + 2 ){
        std::cout << y << "\n";
    }
    //using a for loop and an if statement to find all the even numbers
    for (int z = 1; z <= 20; z = z + 1) {
        if (z % 2 == 1) {
            std::cout << z << "\n";
        }
    }
    
    //next part
    
    //establishing the variable
    int input;
    int nextInput = 0;
    //using a do/while loop to loop through the prompt a bunch of times so the
    //person using the program can enter as many numbers as they want
    do {
        std::cout << "\nPlease enter a whole number.\n";
        std::cin >> input;
    }
    while (input > 0);
    
    
    //input = input + nextInput;
    //
    
    //print the new input
    //std::cout << input;
    
    //next part
    
    
    return 0;
}
