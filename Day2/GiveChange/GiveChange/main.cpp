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
    int totalPennies;
    //creating output variables
    
    int remainderAfterQuarters;
    int remainderAfterDimes;
    int remainderAfterNickels;
    //creating variables for the algorithm
    
    std::cout << "Enter item price in cents\n";
    std::cin >> itemPrice;
    std::cout << "Enter amount paid in cents\n";
    std::cin >> amountPaid;
    //inputs
    
    int totalChange = amountPaid - itemPrice;
    //creating a variable for the remainder
    
    totalQuarters = totalChange/25;
    remainderAfterQuarters = totalChange%25;
    //amount of quarters, finding new remainder
    
    totalDimes = remainderAfterQuarters/10;
    remainderAfterDimes = remainderAfterQuarters%10;
    //amount of dimes, finding new remainder
    
    totalNickels = remainderAfterDimes/5;
    remainderAfterNickels = remainderAfterDimes%5;
    //amount of nickels, finding new remainder
    
    totalPennies = remainderAfterNickels;
    //amount of pennies is the new remainder from last step
    
    std::cout << "Change: " << totalChange << std::endl;
    std::cout << "Quarters: " << totalQuarters << std::endl;
    std::cout << "Dimes: " << totalDimes << std::endl;
    std::cout << "Nickels: " << totalNickels << std::endl;
    std::cout << "Pennies: " << remainderAfterNickels << std::endl;
    //outputs
    
    return 0;
}
