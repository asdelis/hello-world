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
#include <numeric>

#endif /* DiyVector_hpp */


template <typename T>
class MyVector{
public:
    //constructors
    MyVector();
    MyVector(size_t capacity);
    MyVector(T* inputData, size_t size);
    MyVector(const MyVector<T>& rhs);
    
    //destructor
    ~MyVector();
    
    //methods
    size_t getSize() const;
    size_t getCapacity() const;
    void push_back(int val);
    void pop_back();
    T get(size_t index);
    void set(size_t index, T newValue);
    T& operator[](size_t index);
    const T& operator[](size_t index) const;
    MyVector<T>& operator=(const MyVector<T>& rhs);
    bool operator==(const MyVector<T>& rhs) const;
    bool operator!=(const MyVector<T>& rhs) const;
    bool operator<(const MyVector<T>& rhs) const;
    bool operator<=(const MyVector<T>& rhs) const;
    bool operator>(const MyVector<T>& rhs) const;
    bool operator>=(const MyVector<T>& rhs) const;
    
    //lab methods (9.19)
    //begin methods
    T* begin(){
        return data;
    }
    T* begin() const{
        return data;
    }
    
    //end methods
    T* end(){
        return data + size_;
    }
    T* end() const{
        return data + size_;
    }

private:
    T* data;
    size_t size_;
    size_t capacity_;
    void growVector();
};

template <typename T>
//constructor that takes no argument
MyVector<T>::MyVector() {
    size_ = 0;
    capacity_ = 10;
    data = new T[capacity_];
}

template <typename T>
//constructor that takes an array as an argument
MyVector<T>::MyVector(size_t capacity) {
    if (capacity > 0) {
        size_ = 0;
        data = new T[capacity_];
        capacity_ = capacity;
    }
}

template <typename T>
//constructor that reads in an array
MyVector<T>::MyVector(T* inputData, size_t size) {
    size_ = 0;
    capacity_ = 10;
    data = new T[capacity_];
    if (inputData != nullptr) {
        for (int i = 0; i < size; i++){
            push_back(inputData[i]);
        }
    }
}

template <typename T>
//destructor
MyVector<T>::~MyVector() {
    size_ = 0;
    capacity_ = 0;
    delete[] data;
}

template <typename T>
//.size method
size_t MyVector<T>::getSize() const {
    return size_;
}

template <typename T>
//.size method
size_t MyVector<T>::getCapacity() const{
    return capacity_;
}

template <typename T>
//.push_back method
void MyVector<T>::push_back(int val) {
    if (size_ + 1 == capacity_) {
        growVector();
    }
    data[size_] = val;
    size_++;
}

template <typename T>
//grow vector private function called in the push_back method
void MyVector<T>::growVector() {
    //create a new array
    T* temp = new T[2 * capacity_];
    for (int i = 0; i < size_; i++) {
        temp[i] = data[i];
    }
    delete[] data;
    data = temp;
    temp = nullptr;
    //to update the int in the class
    capacity_ *= 2;
}

template <typename T>
//.pop_back method
void MyVector<T>::pop_back() {
    size_--;
}

template <typename T>
//returns the value at the indicated index place
T MyVector<T>::get(size_t index) {
    return data[index];
}

template <typename T>
//changes the value of an indicated index place
void MyVector<T>::set(size_t index, T newValue) {
    data[index] = newValue;
}

template <typename T>
//overload the [] operator
T& MyVector<T>::operator[](size_t index) {
    assert(index < size_ && "Operator is not in range");
    return data[index];
}

template <typename T>
const T& MyVector<T>::operator[](size_t index) const {
    assert(index < size_ && "Operator is not in range");
    return data[index];
}

template <typename T>
//operator= that does a deep copy
MyVector<T>& MyVector<T>::operator=(const MyVector<T>& rhs) {
    if (this != &rhs) {
        delete[] data;
        size_ = rhs.getSize();
        capacity_ = 2 * size_;
        if (capacity_ > 0) {
            data = new T[capacity_];
            for (size_t i = 0; i < rhs.getSize(); i++) {
                data[i] = rhs[i];
            }
        }
    }
    return *this;
}

template <typename T>
//copy constructor that does a deep copy
MyVector<T>::MyVector(const MyVector<T>& rhs) {
    std::cout << "hello from the constructor" << "\n";
    if (this != &rhs) {
        //delete[] data;
        size_ = rhs.getSize();
        capacity_ = 2 * size_;
        if (capacity_ > 0) {
            data = new T[capacity_];
            for (size_t i = 0; i < rhs.getSize(); i++) {
                data[i] = rhs[i];
            }
        }
    }
}

template <typename T>
//operator== that sees if two vectors are equal
bool MyVector<T>::operator==(const MyVector<T>& rhs) const {
    bool isEqual = true;
    if (size_ != rhs.size_){
        isEqual = false;
    }
    else {
        for (int i = 0; i < rhs.getSize(); i++) {
            if (data[i] == rhs[i]) {
                isEqual = true;
            }
        }
    }
    return isEqual;
}

template <typename T>
//operator!= that sees if two vectors are equal
bool MyVector<T>::operator!=(const MyVector<T>& rhs) const {
    bool isNotEqual = false;
    if (size_ != rhs.size_){
        isNotEqual = true;
    }
    else {
        for (int i = 0; i < rhs.getSize(); i++) {
            if (data[i] != rhs[i]) {
                isNotEqual = true;
            }
        }
    }
    return isNotEqual;
}

template <typename T>
//operator< that loops through and returns whether the left hand side
//is less than the right hand side lexographically
bool MyVector<T>::operator<(const MyVector<T>& rhs) const {
    assert(size_ == rhs.size_ && "The size of the vectors must be the same");
    bool isLessThan = false;
    for (int i = 0; i < rhs.getSize(); i++) {
        if (data[i] < rhs[i]) {
            isLessThan = true;
        }
    }
    return isLessThan;
}

template <typename T>
//operator<=
bool MyVector<T>::operator<=(const MyVector<T>& rhs) const {
    assert(size_ == rhs.size_ && "The size of the vectors must be the same");
    bool isLessThanOrEqual = false;
    for (int i = 0; i < rhs.getSize(); i++) {
        if (data[i] <= rhs[i]) {
            isLessThanOrEqual = true;
        }
    }
    return isLessThanOrEqual;
}

template <typename T>
//operator>
bool MyVector<T>::operator>(const MyVector<T>& rhs) const {
    assert(size_ == rhs.size_ && "The size of the vectors must be the same");
    bool isLessThan = false;
    for (int i = 0; i < rhs.getSize(); i++) {
        if (data[i] > rhs[i]) {
            isLessThan = true;
        }
    }
    return isLessThan;
}

template <typename T>
//operator>=
bool MyVector<T>::operator>=(const MyVector<T>& rhs) const {
    assert(size_ == rhs.size_ && "The size of the vectors must be the same");
    bool isLessThan = false;
    for (int i = 0; i < rhs.getSize(); i++) {
        if (data[i] >= rhs[i]) {
            isLessThan = true;
        }
    }
    return isLessThan;
}
