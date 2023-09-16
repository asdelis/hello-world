//
//  DiyVector.hpp
//  DiyVector
//
//  Created by Andrew Delis on 9/13/23.
//

#ifndef DiyVector_hpp
#define DiyVector_hpp
#include <stdio.h>
#include <cassert>

#endif /* DiyVector_hpp */

//PART 1
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
    
    //PART 2 Operator Overloads
    int& operator[](size_t index);
    const int& operator[](size_t index) const;
    MyVector& operator=(const MyVector& rhs);
    
    
    
private:
    int* data;
    size_t size_;
    size_t capacity_;
    void growVector();
};

//PART 2 To do:

//copy constructor
//operator ==
// !=
// <
// <=
// >
// >=
