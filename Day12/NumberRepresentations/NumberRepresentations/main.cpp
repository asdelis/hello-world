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
#include <fstream>

//Function for approxEquals
bool approxEquals( double a, double b, double tolerance ){
    bool isApproxEqual = true;
    float floatA = a;
    float floatB = b;
    double difference = (floatA + floatB) - (a + b);
    if (abs(difference) > tolerance) {
        isApproxEqual = false;
    }
    return isApproxEqual;
}
//Function that prints out the characters and totals up how many were ascii
//and how many are unicode
void countChar(std::string fileName){
    char c;
    int numOfAscii = 0;
    int numOfUnicode = 0;
    std::ifstream inFileStream(fileName);
    while( inFileStream >> c ){
        if (c >= 0 && c <= 127) {
            numOfAscii += 1;
        }
        else {
            numOfUnicode += 1;
        }
        std::cout << c << "\n";
    }
    std::cout << "Number of ascii values: " << numOfAscii << "\n";
    std::cout << "Number of unicode values: " << numOfUnicode << "\n";
    inFileStream.close();
}

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
    //we can use 2 ^ number of bits - 1 formula to figure this out
    uint16_t eightBitMax = pow(2, 8) - 1;
    //won't actually print the correct answer if I use a uint8_t though because it will print its ascii value
    uint16_t sixteenBitMax = pow(2, 16) - 1;
    uint64_t sixtyfourBitMax = pow(2, 64) - 1;
    std::cout << eightBitMax << "\n";
    //in binary this would be 1111 1111
    std::cout << sixteenBitMax << "\n";
    //in binary this would be 1111 1111 1111 1111
    std::cout << sixtyfourBitMax << "\n";
    //in binary this would be 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111
    //all of the unsigned integers should have a min value of 0 which would be a binary number of all zeros
    //Define variables and assign them the min/max values using hexadecimal constants
    unsigned int eightBitMin = 0x0;
    unsigned int sixteenBitMin = 0x00;
    unsigned int sixtyfourBitMin = 0x00000000;
    std::cout << eightBitMin << "\n";
    std::cout << sixteenBitMin << "\n";
    std::cout << sixtyfourBitMin << "\n";
    //and print them out to confirm that you're correct.
    eightBitMax = 0xFF;
    //won't actually print though because it can only print a single character and it will print its ascii value
    sixteenBitMax = 0xFFFF;
    sixtyfourBitMax = 0xFFFFFFFFFFFFFFFF;
    std::cout << eightBitMax << "\n";
    std::cout << sixteenBitMax << "\n";
    std::cout << sixtyfourBitMax << "\n";
    //Note if you print an 8-bit variable, cout will assume you want to print its ASCII value.
    uint8_t one = 1;
    std::cout << one << "\n";
    //doesn't print anything
    //fix
    std::cout << one + 0 << "\n";
    //Try doing the the same for the 3 corresponding signed integer types.
    int16_t two = 2;
    int64_t three = 3;
    std::cout << two + 0 << "\n";
    std::cout << three + 0 << "\n";
    //it seems like they printed normally
    //Try adding 1 to the max-value variables you defined above and printing it. What happened?
    eightBitMax += 1;
    sixteenBitMax += 1;
    sixtyfourBitMax += 1;
    std::cout << eightBitMax << "\n";
    std::cout << sixteenBitMax << "\n";
    std::cout << sixtyfourBitMax << "\n";
    //they went to zero
    //except the 8 bit max because that was actually a 16 bit int
    
    //PART 2
    double doubleCalc = 0.1 + 0.2;
    std::cout << std::setprecision(18);
    std::cout << doubleCalc << "\n";
    //assert(doubleCalc == 0.3);
    float floatCalc = 0.1 + 0.2;
    std::cout << floatCalc << "\n";
    //it printed 0.300000011920928955, so it got less accurate
    //binary can't represent 0.1 in a finite way
    bool isApproxEqual = approxEquals(0.1, 0.2, 0.0000001);
    std::cout << isApproxEqual << "\n";
    
    //PART 3
    std::string fileName = "UTF-8-demo.txt";
    countChar(fileName);
    //Almost none of it was readable for me.
    //Everything that wasn't an ascii value was garbled.
    //I didn't expect this. I thought I was going to see some cool unicode characters.
    //Maybe I did this portion wrong though.
    
    
    
    
    
    return 0;
}
