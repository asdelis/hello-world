//
//  main.cpp
//  VolumeConvert
//
//  Created by Andrew Delis on 8/22/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    float ounces;
    float cups;
    float pints;
    float gallons;
    float liters;
    float cubicInches;
    
    // creating variables
    
    std::cout << "Enter volume in ounces \n";
    std::cin >> ounces;
    
    //a prompt for soemone to enter the number of
    //ounces they would like to know the conversions for
    
    cups = ounces/8;
    pints = ounces/16;
    gallons = ounces/128;
    liters = ounces*0.0296;
    cubicInches = ounces*1.8;
    
    //conversion calculations
    
    std::cout << "Ounces: " << ounces << std::endl;
    std::cout << "Cups: " << cups << std::endl;
    std::cout << "Pints: " << pints << std::endl;
    std::cout << "Gallons: " << gallons << std::endl;
    std::cout << "Liters: " << liters << std::endl;
    std::cout << "Cubic Inches: " << cubicInches << std::endl;
    
    //output the conversions
    
    // Part 1 by Andrew Delis
    
      //create score variables for the 5 scores we are requesting.
      float score1;
      float score2;
      float score3;
      float score4;
      float score5;
      // prompt user by displaying a message to enter 5 assignment scores
      std::cout << "Enter 5 Assignment Scores:\n";
      std::cin >> score1;
      std::cin >> score2;
      std::cin >> score3;
      std::cin >> score4;
      std::cin >> score5;
      // create an average variable that averages all scores
      float average = (score1 + score2 + score3 + score4 + score5) / 5;
      // display the average score to the user
      std::cout << "Average Score: ";
      std::cout << average;
    
    //Part 2 by Josh Barton
    
    
    return 0;
}
