#include <iostream>

//Create a struct called MyVector in PointerPrac.cpp.
struct myVector {
	double* data;
	int size;
	int capacity;
};

//Next, write a function called arrayModSum that takes as
//arguments a reference to a MyVector variable (MyVector& someVar)
//and the size of the array inside that variable.
float arrayModSum(myVector& originalMyVector, int arraySize) {
	//enter size of the
	originalMyVector.size = arraySize;
	originalMyVector.capacity = originalMyVector.size;
	//adds one to every place in the existing array
	//and stores it is a new one called updatedMyVector
	for (int i = 0; i < 10; i++) {
		originalMyVector.data[i] += 1.0;
	}
	//sums up the contents of updatedMyVector
	float sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += i;
	}
	return sum;
}

int main() {
	//create a variable of type MyVector like so: MyVector vec1;
	myVector vec1;

	//read in the array size
	int arraySize	= 10;
	vec1.size = arraySize;

	//then allocate an array on the heap using new
	//store it in vec1.data so that vec1.data is
	//now pointing to the first element of the array.
	vec1.data = new double[vec1.size];

	//Make sure to update vec1.size to the new size,
	//and vec1.capacity to be equal to the size.
	vec1.capacity = vec1.size;

	//Next, loop over the newly created array
	//and fill each element with 1.0.
	for (int i = 0; i < arraySize; i++) {
		vec1.data[i] = 1.0;
	}

	//Next, write a function called arrayModSum that takes as
	//arguments a reference to a MyVector variable (MyVector& someVar)
	//and the size of the array inside that variable.
	int sum = arrayModSum(vec1, 10);

	//Print out the returned sum in main.
	std::cout << sum;

	//Remember to clean up your allocated array using delete []
	delete[] vec1.data;
	vec1.data = nullptr;

}
