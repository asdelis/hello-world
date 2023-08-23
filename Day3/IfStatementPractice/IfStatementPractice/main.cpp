//
//  main.cpp
//  IfStatementPractice
//
//  Created by Andrew Delis on 8/23/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    //Part 1
    
    int age;
    //creating the variable we need
    
    std::cout << "Please enter your age.\n";
    std::cin >> age;
    //creating the prompt
    
    if (age >= 18) {
        std::cout << "You are old enough to vote." << "\n";
    }
    else {
        std::cout << "You are not old enough to vote." << "\n";
    }
    //first if statement about adulthood
    
    if (age >= 30) {
        std::cout << "You are old enough to run for senate." << "\n";
    }
    else {
        std::cout << "You are not old enough to run for senate." << "\n";
    }
    //second if statement about eligibility to run for senate
    
    if (age > 80) {
        std::cout << "You are part of the greatest generation." << "\n";
    }
    //third if statment starting with the oldest generation first
    
    else if (age > 60) {
        std::cout << "You are a baby boomer." << "\n";
    }
    else if (age > 40) {
        std::cout << "You are a part of generation x." << "\n";
    }
    else if (age > 20) {
        std::cout << "You are a millennial." << "\n";
    }
    //using else if to determine the next three generations
    
    else {
        std::cout << "You are an iKid." << "\n";
    }
    //using else for the youngest generation
    
    //Part 2
    
    //weekday, holiday, young children
    
    char weekdayResponse;
    char holidayResponse;
    char childrenResponse;
    //response variables
    
    bool isWeekday;
    bool isHoliday;
    bool hasChildren;
    //creaing the booleans for the responses
    
    std::cout << "Is today a weekday? (Y/N)\n";
    std::cin >> weekdayResponse;
    std::cout << "Is today a holiday? (Y/N)\n";
    std::cin >> holidayResponse;
    std::cout << "Do you have small children? (Y/N)\n";
    std::cin >> childrenResponse;
    //creating the inputs for the program
    
    if (weekdayResponse == 'Y'){
        isWeekday = true;
    }
    else {
        isWeekday = false;
    }
    if (holidayResponse == 'Y'){
        isHoliday = true;
    }
    else {
        isHoliday = false;
    }
    if (childrenResponse == 'Y'){
        hasChildren = true;
    }
    else {
        hasChildren = false;
    }
    //saving the responses in a boolean variable
    
    if (hasChildren) {
        std::cout << "You do not get to sleep in today\n";
    }
    else if (isHoliday || !isWeekday) {
        std::cout << "You get to sleep in today\n";
    }
    else {
        std::cout << "You do not get to sleep in today\n";
    }
    //if statement based on the boolean variables
    
    return 0;
}
