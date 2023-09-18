//
//  DiyVector.cpp
//  DiyVectorTest
//
//  Created by Andrew Delis on 9/13/23.
//

#include "DiyVector.hpp"

int main() {
    //test constructors
    //test destructor
    MyVector v1;
    MyVector v2(30);
    int testArray[] = {1,2,3,4,5};
    MyVector v3(testArray, 5);
    MyVector v4(v1);
    
    //test PART 1 methods
    //getSize and getCapacity
    size_t a = v1.getSize();
    size_t b = v1.getCapacity();
    std::cout << a << "\n" << b << "\n";
    //push_back
    v1.push_back(6);
    size_t c = v1.get(1);
    v1.push_back(7);
    size_t d = v1.get(2);
    std::cout << c << "\n" << d << "\n";
    
    //pop_back
    v1.pop_back();
    
}
