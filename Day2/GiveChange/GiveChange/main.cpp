//
//  main.cpp
//  GiveChange
//
//  Created by Andrew Delis on 8/22/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int itemPrice;
    int amountPaid;
    //creating input variables
    
    int totalQuarters;
    int totalDimes;
    int totalNickels;
    //int totalPennies;
    //creating output variables
    
    int remainder;
    //creating variables for the algorithm
    
    std::cout << "Enter item price in cents\n";
    std::cin >> itemPrice;
    std::cout << "Enter amount paid in cents\n";
    std::cin >> amountPaid;
    
    int totalChange = amountPaid - itemPrice;
    //creating a variable for the remainder
    
    totalQuarters = totalChange/25;
    remainder = totalChange%25;
    //amount of quarters finding new remainder
    
    totalDimes = remainder/10;
    
    
    
    
    std::cout << "Change: " << totalChange << std::endl;
    std::cout << "Quarters: " << totalQuarters << std::endl;
    std::cout << "Dimes " << totalDimes << std::endl;
    std::cout << "Remainder " << remainder << std::endl;
    
    return 0;
}
