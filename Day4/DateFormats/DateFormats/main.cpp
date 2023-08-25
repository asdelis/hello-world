//
//  main.cpp
//  DateFormats
//
//  Created by Andrew Delis on 8/24/23.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    
    //Andrew Delis Part 2 (Part 1 included too)
    
    //Created the input variable that will be a single string.
    std::string input;
    
    //
    std::string inputDay;
    std::string inputMonth;
    std::string inputYear;
    
    //Created variables that allow the strings
    //above to be saved as integers.
    //Month used for part 2.5
    int day;
    int month;
    int year;
    
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
    
    //converting the inputMonth from a numeric string
    //into their respective word strings
    if (inputMonth == "01") {
        inputMonth = "January ";
        maxDay = 31;
    }
    else if (inputMonth == "02"){
        inputMonth = "February ";
        maxDay = 29;
    }
    else if (inputMonth == "03"){
        inputMonth = "March ";
        maxDay = 31;
    }
    else if (inputMonth == "04"){
        inputMonth = "April ";
        maxDay = 30;
    }
    else if (inputMonth == "05"){
        inputMonth = "May ";
        maxDay = 31;
    }
    else if (inputMonth == "06"){
        inputMonth = "June ";
        maxDay = 30;
    }
    else if (inputMonth == "07"){
        inputMonth = "July ";
        maxDay = 31;
    }
    else if (inputMonth == "08"){
        inputMonth = "August ";
        maxDay = 31;
    }
    else if (inputMonth == "09"){
        inputMonth = "September ";
        maxDay = 30;
    }
    else if (inputMonth == "10"){
        inputMonth = "October ";
        maxDay = 31;
    }
    else if (inputMonth == "11"){
        inputMonth = "November ";
        maxDay = 30;
    }
    else if (inputMonth == "12"){
        inputMonth = "December ";
        maxDay = 31;
    }
    else {
        std::cout << inputMonth << " is not a real month." << "\n";
    }
    
    //This converts the numeric string for the day of the month and the year
    //into an integer and makes it is a valid year or day of the month
    day = std::stoi(inputDay);
    year = std::stoi(inputYear);
    
    //outputs given the parameters laid on in the lab instructions
    //given that the input is correct 0000 will be the only
    //input that is not valid I think
    if ( 0 < day && day <= maxDay && year != 0000 ) {
        std::cout << inputMonth << day << ", " << year << "\n";
    }
    else {
        std::cout << "Please enter a valid date." << "\n";
    }
    
    
    //Josh Barton Part 1
    
    //Part 1 - Palindromes by Josh Barton
    //creation of variables
    std::string originalWord;
    std::string reversed = "";
    std::string wordIsAPalindrome = " IS a palindrome.\n";
    std::string wordIsNotAPalindrome = " is NOT a palindrome.\n";
    //Prompt user to enter a word and get their answer.
    std::cout << "Enter a word: ";
    std::cin >> originalWord;
    //build the reversed string one character at a time using a loop
    for (int i = originalWord.length()-1; i >= 0; i--) {
        reversed = reversed + originalWord[i];
    }
    //std::cout << reversed;
    /* Print original string; check if the reversed string is equal to the original string followed by whether or not it's a palindrome.*/
    std::cout << originalWord << std::endl;
    if (reversed == originalWord) {
        std::cout << originalWord + wordIsAPalindrome;
    }
    else {
        std:: cout << originalWord + wordIsNotAPalindrome;
    }
    
    // Andrew Delis Part 2.5
    
    
    return 0;
}
