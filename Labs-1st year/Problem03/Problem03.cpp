#include <iostream>

using namespace std;

// Subsets

void printArray(int* array, int length);
bool isSubset(int*, int, int*, int);

int main()
{
	const int setASize = 5;
	const int setBSize = 3;

	int setA[setASize] = { 1, 2, 3, 4, 5 };
	int setB[setBSize] = { 3, 4, 5 };

	cout << "Set A: ";
	printArray(setA, setASize);

	cout << "Set B: ";
	printArray(setB, setBSize);

	cout << "Is Set B subset of Set A: ";

	auto result = 
		isSubset(setA, setASize, setB, setBSize) == 1 
		? "Yes" 
		: "No";

	cout << result << endl;
}

void printArray(int* array, int length) {
	for (int i = 0; i < length; i++)
	{
		cout << array[i] << " ";
	}

	cout << endl;
}

bool isSubset(int* setA, int setASize, int* setB, int setBSize)
{
	int counter = 0;

	for (int i = 0; i < setASize; i++)
	{
		for (int j = 0; j < setBSize; j++)
		{
			if (setA[i] == setB[j])
			{
				counter++;
			}
		}
	}

	return counter == setBSize;
}