//
//  DiyVectorTemplate.hpp
//  DiyVectorTemplate
//
//  Created by Andrew Delis on 9/18/23.
//

#ifndef DiyVectorTemplate_hpp
#define DiyVectorTemplate_hpp

#include <stdio.h>
#include <cassert>
#include <iostream>

#endif /* DiyVector_hpp */

//PART 1
//Class name and contents
class MyVector{
    
public:
    //constructors
    MyVector();
    MyVector(size_t capacity);
    MyVector(int* inputData, size_t size);
    MyVector(const MyVector& rhs);
    
    //destructor
    ~MyVector();
    
    //methods
    size_t getSize() const;
    size_t getCapacity() const;
    void push_back(int val);
    void pop_back();
    int get(int index);
    void set(int index, int newValue);
    
    //PART 2 Operator Overloads
    int& operator[](size_t index);
    const int& operator[](size_t index) const;
    MyVector& operator=(const MyVector& rhs);
    bool operator==(const MyVector& rhs) const;
    bool operator!=(const MyVector& rhs) const;
    bool operator<(const MyVector& rhs) const;
    bool operator<=(const MyVector& rhs) const;
    bool operator>(const MyVector& rhs) const;
    bool operator>=(const MyVector& rhs) const;
    
private:
    int* data;
    size_t size_;
    size_t capacity_;
    void growVector();
};
