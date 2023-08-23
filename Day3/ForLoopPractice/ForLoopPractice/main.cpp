//
//  main.cpp
//  ForLoopPractice
//
//  Created by Andrew Delis on 8/23/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    //A while loop seems more appropriate here
    //because I am more concerned with getting to 10
    //than I am with the number times it loops.
    
    //making the loop and printing it out per loop through
    int num = 0;
    //variable
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
    
    //creating an if statement to let people know they did it wrong if they did it wrong
    if (input1 > input2) {
        std::cout << "Second response was not larger than your first.\n";
    }
    
    //creating the while loop
    while (input1 < input2){
        input1 = input1 + 1;
        std::cout << input1;
    }
    
    //next part
    
    
    
    
    return 0;
}
