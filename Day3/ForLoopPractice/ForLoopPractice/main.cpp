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
    //creating a while loop in the if statement to add
    //qualifiers that will determine which program to run
    if (input1 < input2) {
        while (input1 < input2){
            input1 = input1 + 1;
            std::cout << input1 << "\n";
        }
    }
    else {
        while (input1 > input2){
            input1 = input1 - 1;
            std::cout << input1 << "\n";
        }
    }
    
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
    
    
    
    return 0;
}
