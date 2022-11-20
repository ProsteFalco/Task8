#include <iostream>
#include <vector>

#pragma once
class TransitiveClosure
{
public:
	template <typename T>
	static T GetByWarshall(T matrix);
private:
	template <typename T>
	static int GetSize(T matrix);
};

template<typename T>
inline T TransitiveClosure::GetByWarshall(T matrix) //function based on pseudocode, returns T array
{
	T outputMatrix = matrix; 

	int size = TransitiveClosure::GetSize(matrix); //calling of GetSize function to determine size of array

	for (int k = 0; k < size; k++) {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				outputMatrix[i][j] = outputMatrix[i][j] || (outputMatrix[i][k] && outputMatrix[k][j]);
			}
		}
	}
	return outputMatrix;
}

template<typename T>
inline int TransitiveClosure::GetSize(T matrix) //function to determine size of the input array
{
	int i = 0;

	while (matrix[0][i] == 1 || matrix[0][i] == 0) //increments i till in the bounds of the array
		i++;

	return i;
}
