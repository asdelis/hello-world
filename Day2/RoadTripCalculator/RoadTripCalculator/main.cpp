//
//  main.cpp
//  RoadTripCalculator
//
//  Created by Andrew Delis on 8/22/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int tripDistance;
    float milesPerGallon;
    float gasCost;
    
    //Step 1: Making some variables
    
    std::cout << "Please enter the distance of your trip in whole miles" << std::endl;
    std::cin >> tripDistance;
    std::cout << "Please enter the efficiency of your car in miles per gallon" << std::endl;
    std::cin >> milesPerGallon;
    std::cout << "Please enter the price of gas in USD" << std::endl;
    std::cin >> gasCost;
    
    //Step 2: Allowing inputs for the variables we made in Step 1
    
    float gallonsPerTrip = tripDistance/milesPerGallon;
    
    //Step 3: creating a new variable
    //that is the number of gallons of gas needed per trip
    
    float tripCost = gallonsPerTrip * gasCost;
    
    //Step 4: creating a new variable
    //that is the total cost of of the trip
    
    std::cout << "The total cost of your trip is " << "$" << tripCost << std::endl;
    
    //Step 5: Output the result of the program
    
    return 0;
}
