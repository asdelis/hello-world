//
//  main.cpp
//  DateFormats
//
//  Created by Andrew Delis on 8/24/23.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    
    //Andrew Delis Part 2 and Part 2.5
    
    //Created the input variable that will be a single string.
    std::string input;
    
    //
    std::string inputDay;
    std::string inputMonth;
    std::string inputYear;
    
    //Also created a boolean that will be used to check if the input
    //was in the correct format.
    bool correctFormat;
    
    //
    int day;
    int monthMax;
    
    //creating the prompt using the string variable we just created
    std::cout << " Enter a date: (mm/dd/yyyy)" << "\n";
    std::cin >> input;
    
    //Used an if statement to make sure date format is correct (mm/dd/yyyy).
    //Did this by using the input variable
    //and the boolean "correctFormat" that we created above.
    
    //Created another if statment in the first if statementn
    //that separates the individual characters for the day, month, and year,
    //and assigns those new string values to variables.
    
    //I thought it would be a good idea to do this in a nested if because
    //it prevents the sub-strings from being assigned values
    //if the input is in the wrong format
    if (input.length() == 10) {
        correctFormat = true;
        if (correctFormat = true){
            inputMonth = input.substr(0,2);
            inputDay = input.substr(3,2);
            inputYear = input.substr(6,4);
        }
    }
    else {
        std::cout << "Please enter a valid date." << "\n";
    }
    
    
    
    
    //converting the month from numeric strings into word strings
    if (inputMonth == "01") {
        inputMonth = "January ";
        monthMax = 31;
    }
    else if (inputMonth == "02"){
        inputMonth = "February ";
        monthMax = 29;
    }
    else if (inputMonth == "03"){
        inputMonth = "March ";
        monthMax = 31;
    }
    else if (inputMonth == "04"){
        inputMonth = "April ";
        monthMax = 30;
    }
    else if (inputMonth == "05"){
        inputMonth = "May ";
        monthMax = 31;
    }
    else if (inputMonth == "06"){
        inputMonth = "June ";
        monthMax = 30;
    }
    else if (inputMonth == "07"){
        inputMonth = "July ";
        monthMax = 31;
    }
    else if (inputMonth == "08"){
        inputMonth = "August ";
        monthMax = 31;
    }
    else if (inputMonth == "09"){
        inputMonth = "September ";
        monthMax = 30;
    }
    else if (inputMonth == "10"){
        inputMonth = "October ";
        monthMax = 31;
    }
    else if (inputMonth == "11"){
        inputMonth = "November ";
        monthMax = 30;
    }
    else if (inputMonth == "12"){
        inputMonth = "December ";
        monthMax = 31;
    }
    else {
        std::cout << "Please enter a valid date." << "\n";
    }
    
    //converting the numeric string for the day of the month into an integer
    //and making sure it is a valid day of the month (not in the most precise way though)
    day = std::stoi(inputDay);
    if ( day < 0 || day > monthMax) {
        std::cout << "Please enter a valid date." << "\n";
    }
    
    //outputs
    std::cout << inputMonth << std::stoi(inputDay) << ", " << inputYear << "\n";
    
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
