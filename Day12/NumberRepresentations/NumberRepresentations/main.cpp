//
//  main.cpp
//  NumberRepresentations
//
//  Created by Andrew Delis on 9/6/23.
//

#include <iostream>
#include <cstdint>
#include <math.h>
#include <iomanip>

int main(int argc, const char * argv[]) {
    
    //PART 1
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
    //Starting with the unsigned types uint8_t, uint16_t, and uint64_t,
    //think about how you would write the min and max values for each type in binary.
    uint8_t eightBitMax = pow(2, 4) - 1;
    uint16_t sixteenBitMax = pow(2, sizeof(uint16_t) * 4) - 1;
    uint64_t sixtyfourBitMax = pow(2, sizeof(uint64_t) * 4) - 1;
    std::cout << eightBitMax << "\n";
    //in binary this would be 1111
    std::cout << sixteenBitMax << "\n";
    //in binary this would be 1111 1111
    std::cout << sixtyfourBitMax << "\n";
    //in binary this would be 1111 1111 1111 1111 1111 1111 1111 1111
    //all of the unsigned integers should have a min value of 0 which would be a binary number of all zeros
    unsigned int eightBitMin = 0x0;
    unsigned int sixteenBitMin = 0x00;
    unsigned int sixtyfourBitMin = 0x00000000;
    std::cout << eightBitMin << "\n";
    std::cout << sixteenBitMin << "\n";
    std::cout << sixtyfourBitMin << "\n";
    //Define variables and assign them the min/max values using hexadecimal constants
    //and print them out to confirm that you're correct.
    eightBitMax = 0xF;
    sixteenBitMax = 0xFF;
    sixtyfourBitMax = 0xFFFFFFFF;
    std::cout << eightBitMax << "\n";
    std::cout << sixteenBitMax << "\n";
    std::cout << sixtyfourBitMax << "\n";
    //Note if you print an 8-bit variable, cout will assume you want to print its ASCII value.
    uint8_t one = 1;
    std::cout << one << "\n";
    //fix
    std::cout << one + 0<< "\n";
    //Try doing the the same for the 3 corresponding signed integer types.
    uint16_t two = 2;
    uint64_t three = 3;
    std::cout << two << "\n";
    std::cout << three << "\n";
    //it seems like they printed normally
    //Try adding 1 to the max-value variables you defined above and printing it. What happened?
    eightBitMax += 1;
    sixteenBitMax += 1;
    sixtyfourBitMax += 1;
    std::cout << eightBitMax << "\n";
    std::cout << sixteenBitMax << "\n";
    std::cout << sixtyfourBitMax << "\n";
    
    //Part 2
    double calc = 0.1 + 0.2;
    //asssert(calc == 0.3);
    std::cout << std::setprecision(18);
    
    
    
    
    return 0;
}
