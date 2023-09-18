//
//  DiyVector.cpp
//  DiyVector
//
//  Created by Andrew Delis on 9/13/23.
//

#include "DiyVector.hpp"

//constructor that takes no argument
MyVector::MyVector() {
    std::cout << "hello from the constructor" << "\n";
    size_ = 0;
    capacity_ = 10;
    data = new int[capacity_];
}

//constructor that takes an array as an argument
MyVector::MyVector(size_t capacity) {
    std::cout << "hello from the constructor" << "\n";
    if (capacity > 0) {
        size_ = 0;
        data = new int[capacity_];
        capacity_ = capacity;
    }
}

//constructor that reads in an array
MyVector::MyVector(int* inputData, size_t size) {
    std::cout << "hello from the constructor" << "\n";
    size_ = 0;
    capacity_ = 10;
    data = new int[capacity_];
    if (inputData != nullptr) {
        for (int i = 0; i < size; i++){
            push_back(inputData[i]);
        }
    }
}

//destructor
MyVector::~MyVector() {
    std::cout << "hello from the destructor" << "\n";
    size_ = 0;
    capacity_ = 0;
    delete[] data;
}

//.size method
size_t MyVector::getSize() const {
    return size_;
}

//.size method
size_t MyVector::getCapacity() const{
    return capacity_;
}

//.push_back method
void MyVector::push_back(int val) {
    if (size_ + 1 == capacity_) {
        growVector();
    }
    data[size_] = val;
    size_++;
}

//grow vector private function called in the push_back method
void MyVector::growVector() {
    //create a new array
    int* temp = new int[2 * capacity_];
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
void MyVector::pop_back() {
    size_--;
}

//returns the value at the indicated index place
int MyVector::get(int index) {
    return data[index];
}

//changes the value of an indicated index place
void MyVector::set(int index, int newValue) {
    data[index] = newValue;
}

//PART 2
//overload the [] operator
int& MyVector::operator[](size_t index) {
    assert(index < size_ && "Operator is not in range");
    return data[index];
}
const int& MyVector::operator[](size_t index) const {
    assert(index < size_ && "Operator is not in range");
    return data[index];
}

//operator= that does a deep copy
MyVector& MyVector::operator=(const MyVector& rhs) {
    if (this != &rhs) {
        delete[] data;
        size_ = rhs.getSize();
        capacity_ = 2 * size_;
        if (capacity_ > 0) {
            data = new int[capacity_];
            for (size_t i = 0; i < rhs.getSize(); i++) {
                data[i] = rhs[i];
            }
        }
    }
    return *this;
}

//copy constructor that does a deep copy
MyVector::MyVector(const MyVector& rhs) {
    std::cout << "hello from the constructor" << "\n";
    if (this != &rhs) {
        delete[] data;
        size_ = rhs.getSize();
        capacity_ = 2 * size_;
        if (capacity_ > 0) {
            data = new int[capacity_];
            for (size_t i = 0; i < rhs.getSize(); i++) {
                data[i] = rhs[i];
            }
        }
    }
}

//operator== that sees if two vectors are equal
bool MyVector::operator==(const MyVector& rhs) {
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

//operator!= that sees if two vectors are equal
bool MyVector::operator!=(const MyVector& rhs) {
    bool isNotEqual = false;
    if (size_ == rhs.size_){
        isNotEqual = false;
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

//operator< that loops through and returns whether the left hand side
//is less than the right hand side lexographically
bool MyVector::operator<(const MyVector& rhs) {
    assert(size_ == rhs.size_ && "The size of the vectors must be the same");
    bool isLessThan = false;
    for (int i = 0; i < rhs.getSize(); i++) {
        if (data[i] < rhs[i]) {
            isLessThan = true;
        }
    }
    return isLessThan;
}

//operator<=
bool MyVector::operator<=(const MyVector& rhs) {
    assert(size_ == rhs.size_ && "The size of the vectors must be the same");
    bool isLessThanOrEqual = false;
    for (int i = 0; i < rhs.getSize(); i++) {
        if (data[i] <= rhs[i]) {
            isLessThanOrEqual = true;
        }
    }
    return isLessThanOrEqual;
}

//operator>
bool MyVector::operator>(const MyVector& rhs) {
    assert(size_ == rhs.size_ && "The size of the vectors must be the same");
    bool isLessThan = false;
    for (int i = 0; i < rhs.getSize(); i++) {
        if (data[i] > rhs[i]) {
            isLessThan = true;
        }
    }
    return isLessThan;
}

//operator>=
bool MyVector::operator>=(const MyVector& rhs) {
    assert(size_ == rhs.size_ && "The size of the vectors must be the same");
    bool isLessThan = false;
    for (int i = 0; i < rhs.getSize(); i++) {
        if (data[i] >= rhs[i]) {
            isLessThan = true;
        }
    }
    return isLessThan;
}

