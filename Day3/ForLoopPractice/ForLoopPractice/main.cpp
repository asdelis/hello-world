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
    
    //establishing the variables
    int input;
    int sum = 0;
    //using a do/while loop to loop through the prompt a bunch of times so the
    //person using the program can enter as many numbers as they want
    //we will also have the input variable update the sum variable every time a
    //number is added
    do {
        std::cout << "\nPlease enter a whole number.\n";
        std::cin >> input;
        sum = sum + input;
    }
    while (input >= 0);
    //backing the last input (the negative number) out of our sum
    sum = sum - input;
    //printing the amount
    std::cout << sum << "\n";
    
    //next part
    
    //creating the first loop using variable "a"
    //also added some formatting
    for (int a = 1; a <= 5; a = a + 1){
        std::cout << "\n";
        std::cout << a << "x*:" << " ";
    //creating a second loop for every output of the first loop
    //that multiplies the first loop outputs by "a"
    // included some formatting
        for (int b = 1; b <= 5; b = b + 1) {
            std::cout << " " << b * a;
        }
    }
    
    return 0;
}
