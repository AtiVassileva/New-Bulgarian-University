#include <iostream>

using namespace std;

// Sets Difference 

void printArray(int* array, int length);
int setDifferencePower(int*, int, int*, int, int&);
void findDifference(int*, int, int*, int, int*, int&);

int main()
{
	const int setASize = 5;
	const int setBSize = 3;

	int setA[setASize] = { 1, 2, 3, 4, 5 };
	int setB[setBSize] = { 3, 7, 5 };

	int power;

	setDifferencePower(setA, setASize, setB, setBSize, power);

	int* difference = new int[power];

	cout << "Set A: ";
	printArray(setA, setASize);

	cout << "Set B: ";
	printArray(setB, setBSize);

	cout << "A/B: ";

	findDifference(setA, setASize, setB, setBSize, difference, power);
	printArray(difference, power);
}

void printArray(int* array, int length) {
	for (int i = 0; i < length; i++)
	{
		cout << array[i] << " ";
	}

	cout << endl;
}

int setDifferencePower(int* setA, int setASize, int* setB, int setBSize, int& differencePower)
{
	differencePower = 0;

	int i, j;

	for (i = 0; i < setASize; i++)
	{
		for (j = 0; j < setBSize; i++)
		{
			if (setA[i] == setB[j])
			{
				break;
			}
		}

		if (j == setBSize)
		{
			differencePower++;
		}
	}

	return differencePower;
}

void findDifference(int* setA, int setASize, int* setB, int setBSize, int* difference, int& differenceSize)
{
	int i, j, k = 0;

	for (i = 0; i < setASize; i++)
	{
		for (j = 0; j < setBSize; j++)
		{
			if (setA[i] == setB[j])
			{
				break;
			}
		}

		if (j == setBSize)
		{
			difference[k++] = setA[i];
		}
	}
}