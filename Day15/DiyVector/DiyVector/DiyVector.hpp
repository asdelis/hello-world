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
    size_t getSize();
    size_t getCapacity();
    void push_back(int val);
    void pop_back();
    int get(int index);
    void set(int index, int newValue);
    
    
private:
    int* data;
    size_t size_;
    size_t capacity_;
    void growVector();
};



//get(myVec, index) -- return the appropriate value in the vector
//works like [] does for std::vectors
//^ method

//set(myVec, index, newValue) -- set the appropriate value in the vector
//(works like [] for std::vector)
//^ method
