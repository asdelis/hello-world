//
//  main.cpp
//  NumberRepresentations
//
//  Created by Andrew Delis on 9/6/23.
//

#include <iostream>
#include <cstdint>

int main(int argc, const char * argv[]) {
    
    //Print out the sizes of the built in numeric types
    int intSize = sizeof(int);
    int floatSize = sizeof(float);
    int doubleSize = sizeof(double);
    std::cout << intSize << "\n";
    std::cout << floatSize << "\n";
    std::cout << doubleSize << "\n";
    
    //Print the size of a few of these (<cstdint>) types to confirm that they are truly the size advertised.
    int int8Size = sizeof(int8_t);
    int int16Size = sizeof(int16_t);
    int uint8Size = sizeof(uint8_t);
    int uint16Size = sizeof(uint16_t);
    std::cout << int8Size << "\n";
    std::cout << int16Size << "\n";
    std::cout << uint8Size << "\n";
    std::cout << uint16Size << "\n";
    
    
    
    
    return 0;
}
