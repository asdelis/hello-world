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
    return 0;
}
