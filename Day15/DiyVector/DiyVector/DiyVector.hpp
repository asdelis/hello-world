//
//  DiyVector.hpp
//  DiyVector
//
//  Created by Andrew Delis on 9/13/23.
//

#ifndef DiyVector_hpp
#define DiyVector_hpp

#include <stdio.h>

#endif /* DiyVector_hpp */

//Class name and contents
class MyVector{
    
public:
    //constructors
    MyVector();
    MyVector(size_t capacity);
    MyVector(int* inputData, size_t size);
    //destructor
    ~MyVector();
    
    //methods
    size_t size();
    void push_back(int val);
    void pop_back();
    //set(myVec, index, newValue)
    //growVector(myVec)
    //getSize()
    //getCapacity()
    
private:
    int* data;
    size_t size_;
    size_t capacity_;
    void growVector();
};

//makeVector(initialCapacity ) -- return a vector with the given capacity and a size of 0
//^ constructor

//freeVector(MyVec) -- deallocate any heap memory used by the MyVector object
//^ deconstructor

//pushBack -- works like it does for std::vector
//^ method

//popBack -- works like it does for std::vector
//^ method

//get(myVec, index) -- return the appropriate value in the vector
//works like [] does for std::vectors
//^ method

//set(myVec, index, newValue) -- set the appropriate value in the vector
//(works like [] for std::vector)
//^ method

//growVector(myVec) -- should double the capacity of the vector.
//The values should be copied from the old array to the new array
//^ method

//getSize() returns the size

//getCapacity() returns capacity
//(since your member variables are now private, you need these methods for users
//to be able to see those values)
//^ method
