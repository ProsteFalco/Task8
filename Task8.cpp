#include <iostream>
#include "TransitiveClosure.h"
#include <vector>

template <typename T>
void Printout(T matrix, int size) { //function to print out every element of array in readable form
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

template <typename T>
void DeallocatePointerArray(T array, int size) { //function to deallocate inputed array
	for (int i = 0; i < size; i++) {
		delete[] array[i];
	}
	delete[] array;
}

int main()
{
	srand(time(0)); //"true" random

	//1st Array
	const int size1 = 4; //size of array, only one value since matrix has to be square shaped
	bool** arr1 = new bool* [size1]; //declaration of 2D pointer array
	for (int i = 0; i < size1; i++) {
		arr1[i] = new bool[size1];
		for (int j = 0; j < size1; j++) {
			arr1[i][j] = rand() % 2; //filling array with values 0 and 1(true and false)
		}
	}
	
	Printout(arr1, size1); //prints array before algorithm
	std::cout << std::endl;
	bool ** output1 = TransitiveClosure::GetByWarshall(arr1); //algorithm
	Printout(output1, size1); //prints array after algorithm

	DeallocatePointerArray(arr1, size1); //deallocates created array




	//next 4 arrays are all the same, only different sizes !!





	//2nd Array
	const int size2 = 5;
	bool** arr2 = new bool* [size2];
	for (int i = 0; i < size2; i++) {
		arr2[i] = new bool[size2];
		for (int j = 0; j < size2; j++) {
			arr2[i][j] = rand() % 2;
		}
	}

	std::cout << std::endl;
	Printout(arr2, size2);
	std::cout << std::endl;
	bool** output2 = TransitiveClosure::GetByWarshall(arr2);
	Printout(output2, size2);

	DeallocatePointerArray(arr2, size2);

	//3rd Array
	const int size3 = 6;
	bool** arr3 = new bool* [size3];
	for (int i = 0; i < size3; i++) {
		arr3[i] = new bool[size3];
		for (int j = 0; j < size3; j++) {
			arr3[i][j] = rand() % 2;
		}
	}

	std::cout << std::endl;
	Printout(arr3, size3);
	std::cout << std::endl;
	bool** output3 = TransitiveClosure::GetByWarshall(arr3);
	Printout(output3, size3);

	DeallocatePointerArray(arr3, size3);

	//4th Array
	const int size4 = 7;
	bool** arr4 = new bool* [size4];
	for (int i = 0; i < size4; i++) {
		arr4[i] = new bool[size4];
		for (int j = 0; j < size4; j++) {
			arr4[i][j] = rand() % 2;
		}
	}

	std::cout << std::endl;
	Printout(arr4, size4);
	std::cout << std::endl;
	bool** output4 = TransitiveClosure::GetByWarshall(arr4);
	Printout(output4, size4);

	DeallocatePointerArray(arr4, size4);

	//5th Array
	const int size5 = 8;
	bool** arr5 = new bool* [size5];
	for (int i = 0; i < size5; i++) {
		arr5[i] = new bool[size5];
		for (int j = 0; j < size5; j++) {
			arr5[i][j] = rand() % 2;
		}
	}

	std::cout << std::endl;
	Printout(arr5, size5);
	std::cout << std::endl;
	bool** output5 = TransitiveClosure::GetByWarshall(arr5);
	Printout(output5, size5);

	DeallocatePointerArray(arr5, size5);

}