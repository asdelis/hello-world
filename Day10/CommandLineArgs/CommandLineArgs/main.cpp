//
//  main.cpp
//  CommandLineArgs
//
//  Created by Andrew Delis on 9/1/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    std::cout << argc << std::endl;
    std::cout << argv[0] << std::endl;
    return 0;
    //argv[0] prints "./main"
}
