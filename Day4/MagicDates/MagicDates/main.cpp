//
//  main.cpp
//  MagicDates
//
//  Created by Andrew Delis on 8/24/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    //Created the input variable that will be a single string.
    std::string input;
    
    //Created the string variables that we will need for splicing our input
    std::string inputDay;
    std::string inputMonth;
    std::string inputYear;
    
    //created the string we will need to splice the year
    std::string yearEndStr;
    
    //Created variables that allow the strings
    //above to be saved as integers.
    //Month used for part 2.5
    int day;
    int month;
    int year;
    int yearEndInt;
    
    //Created a variable for the max number of days per month
    int maxDay;
    
    //creating the prompt using the string variable we just created
    std::cout << " Enter a date: (mm/dd/yyyy)" << "\n";
    std::cin >> input;
    
    //The lab instructions said we can assume that
    //the input is in the correct format (mm/dd/yyyy).
    
    //This separates the individual characters for the day, month, and year,
    //and assigns those new string values to variables.
    inputMonth = input.substr(0,2);
    inputDay = input.substr(3,2);
    inputYear = input.substr(6,4);
    
    //This converts the numeric string for the day of the month and the year
    //into an integer and makes it is a valid year or day of the month
    day = std::stoi(inputDay);
    month = std::stoi(inputMonth);
    year = std::stoi(inputYear);
    
    //turning the last two digits from a string to an int
    //need this for our calculation
    yearEndStr = inputYear.substr(2,4);
    yearEndInt = std::stoi(yearEndStr);
    
    if (day * month == yearEndInt) {
        std::cout << inputMonth << "/" << inputDay << "/" << inputYear << " is a magic date." << "\n";
    }
    else {
        std::cout << inputMonth << "/" << inputDay << "/" << inputYear << " is NOT a magic date." << "\n";
    }
    
    
    
    
    return 0;
}
