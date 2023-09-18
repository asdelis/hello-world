//
//  DiyVector.cpp
//  DiyVectorTest
//
//  Created by Andrew Delis on 9/13/23.
//

#include "DiyVector.hpp"

int main() {
    
    //PART 1 Tests
    //test constructor that takes no arguments (the long way)
    MyVector v1;
    //getSize and getCapacity
    std::cout << "getSize and getCapacity test" << "\n";
    size_t a = v1.getSize();
    size_t b = v1.getCapacity();
    std::cout << a << "\n" << b << "\n";
    
    //push_back
    std::cout << "push_back test" << "\n";
    v1.push_back(1);
    size_t c = v1.getSize();
    v1.push_back(2);
    size_t d = v1.getSize();
    std::cout << c << "\n" << d << "\n";
    
    //get test
    std::cout << "get test" << "\n";
    size_t e = v1.get(1);
    std::cout << e << "\n";
    
    //set test
    std::cout << "set test" << "\n";
    v1.set(1, 3);
    size_t f = v1.get(1);
    std::cout << f << "\n";
    
    //pop_back
    std::cout << "pop_back test" << "\n";
    v1.pop_back();
    size_t g = v1.getSize();
    std::cout << g << "\n";
    
    //test constructor that takes an array as an argument
    MyVector v2(30);
    assert(v2.getSize() == 0 && v2.getCapacity() == 30);
    v2.push_back(9);
    v2.push_back(10);
    assert(v2.getSize() == 2 && v2.getCapacity() == 30);
    assert(v2.get(1) == 10);
    v2.set(1, 11);
    assert(v2.get(1) == 11);
    v2.pop_back();
    assert(v2.getSize() == 1);
    
    //test constructor that reads in an array
    int testArray[] = {1,2,3,4,5};
    MyVector v3(testArray, 5);
    assert(v3.getSize() == 5 && v3.getCapacity() == 10);
    v3.push_back(6);
    v3.push_back(7);
    assert(v3.getSize() == 7 && v3.getCapacity() == 10);
    assert(v3.get(6) == 7);
    v3.set(6, 11);
    assert(v3.get(6) == 11);
    v3.pop_back();
    assert(v3.getSize() == 6);
    
    //test constructor that reads in a MyVector
    MyVector v4(v3);
    assert(v4.getSize() == 6 && v4.getCapacity() == 12);
    v4.push_back(7);
    v4.push_back(8);
    assert(v4.getSize() == 8 && v4.getCapacity() == 12);
    assert(v4.get(7) == 8);
    v4.set(7, 9);
    assert(v4.get(7) == 9);
    v4.pop_back();
    assert(v4.getSize() == 7);
    
    //PART 2 Tests
    int testArray2[] = {1,2,3,4,5,6,7,8,9,10};
    MyVector v5(testArray2, 10);
    int testArray3[] = {1,2,3,4,5,5,4,3,2,1};
    MyVector v6(testArray3, 10);
    
    //testing operator[]
    assert(v5[9] == 10);
    v5[9] = 11;
    assert(v5[9] == 11);
    
    //changing the MyVector back
    v5[9] = 10;
    
    MyVector v7 = v5;
    
    
    
    
}
