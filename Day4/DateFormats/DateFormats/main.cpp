//
//  main.cpp
//  DateFormats
//
//  Created by Andrew Delis on 8/24/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    //Andrew Delis Part 2
    
    //creating the input variable that will be a single string
    std::string inputDate;
    bool correctFormat;
    
    //creating the prompt using the string variable we just created
    std::cout << " Enter a date: (mm/dd/yyyy)" << std::endl;
    std::cin >> inputDate;
    
    //used an if statment to make sure a date in correct format (mm/dd/yyyy) is entered:
    if (inputDate.length() == 9) {
        correctFormat = true;
    }
    else{
        std::cout << "Please enter a valid date." << std::endl;
    }
    
    return 0;
}
