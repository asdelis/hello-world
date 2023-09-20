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
    
private:
    T* data;
    size_t size_;
    size_t capacity_;
    void growVector();
};

//constructor that takes no argument
template <typename T>
MyVector<T>::MyVector() {
    std::cout << "hello from the constructor" << "\n";
    size_ = 0;
    capacity_ = 10;
    data = new T[capacity_];
}

//constructor that takes an array as an argument
template <typename T>
MyVector<T>::MyVector(size_t capacity) {
    std::cout << "hello from the constructor" << "\n";
    if (capacity > 0) {
        size_ = 0;
        data = new T[capacity_];
        capacity_ = capacity;
    }
}

//constructor that reads in an array
template <typename T>
MyVector<T>::MyVector(T* inputData, size_t size) {
    std::cout << "hello from the constructor" << "\n";
    size_ = 0;
    capacity_ = 10;
    data = new T[capacity_];
    if (inputData != nullptr) {
        for (int i = 0; i < size; i++){
            push_back(inputData[i]);
        }
    }
}

//destructor
template <typename T>
MyVector<T>::~MyVector() {
    std::cout << "hello from the destructor" << "\n";
    size_ = 0;
    capacity_ = 0;
    delete[] data;
}

//.size method
template <typename T>
size_t MyVector<T>::getSize() const {
    return size_;
}

//.size method
template <typename T>
size_t MyVector<T>::getCapacity() const{
    return capacity_;
}

//.push_back method
template <typename T>
void MyVector<T>::push_back(int val) {
    if (size_ + 1 == capacity_) {
        growVector();
    }
    data[size_] = val;
    size_++;
}

//grow vector private function called in the push_back method
template <typename T>
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

//.pop_back method
template <typename T>
void MyVector<T>::pop_back() {
    size_--;
}

//returns the value at the indicated index place
template <typename T>
T MyVector<T>::get(size_t index) {
    return data[index];
}

//changes the value of an indicated index place
template <typename T>
void MyVector<T>::set(size_t index, T newValue) {
    data[index] = newValue;
}

//overload the [] operator
template <typename T>
T& MyVector<T>::operator[](size_t index) {
    assert(index < size_ && "Operator is not in range");
    return data[index];
}

template <typename T>
const T& MyVector<T>::operator[](size_t index) const {
    assert(index < size_ && "Operator is not in range");
    return data[index];
}

//operator= that does a deep copy
template <typename T>
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

//copy constructor that does a deep copy
template <typename T>
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

//operator== that sees if two vectors are equal
template <typename T>
bool MyVector<T>::operator==(const MyVector<T>& rhs) const {
    if (size_ != rhs.size_){
        return false;
    }
    else {
        for (int i = 0; i < rhs.getSize(); i++) {
            if (data[i] != rhs[i]) {
                return false;
            }
        }
    }
    return true;
}

//operator!= that sees if two vectors are equal
template <typename T>
bool MyVector<T>::operator!=(const MyVector<T>& rhs) const {
    if (size_ != rhs.size_){
        return false;
    }
    else {
        for (int i = 0; i < rhs.getSize(); i++) {
            if (data[i] == rhs[i]) {
                return false;
            }
        }
    }
    return true;
}

//operator< that loops through and returns whether the left hand side
//is less than the right hand side lexographically
template <typename T>
bool MyVector<T>::operator<(const MyVector<T>& rhs) const {
    assert(size_ == rhs.size_ && "The size of the vectors must be the same");
    for (int i = 0; i < rhs.getSize(); i++) {
        if (data[i] > rhs[i]) {
            return false;
        }
    }
    return true;
}

//operator<=
template <typename T>
bool MyVector<T>::operator<=(const MyVector<T>& rhs) const {
    assert(size_ == rhs.size_ && "The size of the vectors must be the same");
    for (int i = 0; i < rhs.getSize(); i++) {
        if (data[i] >= rhs[i]) {
            return false;
        }
    }
    return true;
}

//operator>
template <typename T>
bool MyVector<T>::operator>(const MyVector<T>& rhs) const {
    assert(size_ == rhs.size_ && "The size of the vectors must be the same");
    for (int i = 0; i < rhs.getSize(); i++) {
        if (data[i] < rhs[i]) {
            return false;
        }
    }
    return true;
}

//operator>=
template <typename T>
bool MyVector<T>::operator>=(const MyVector<T>& rhs) const {
    assert(size_ == rhs.size_ && "The size of the vectors must be the same");
    for (int i = 0; i < rhs.getSize(); i++) {
        if (data[i] <= rhs[i]) {
            return false;
        }
    }
    return true;
}
