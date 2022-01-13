#include <iostream>

using namespace std;

int* fillArray(int[], int length);
void printArray(int[], int);
void printRepeatingElements(int[], int);

int main()
{
	int length;
	cout << "Array length: ";
	cin >> length;

	auto array = new int[length];

	fillArray(array, length);
	printArray(array, length);

	cout << "Repeating elements: ";
	printRepeatingElements(array, length);
}

int* fillArray(int array[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << "array[" << i << "] = ";
		cin >> array[i];
	}

    return array;
}

void printArray(int array[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

void printRepeatingElements(int array[], int length)
{
	int count = 0;

	for (int i = 0; i < length; i++) 
	{
		bool containsNumber = false;

		for (int j = 0; j < i && !containsNumber; j++)
		{
			containsNumber = (array[i] == array[j]);
		}

		if (containsNumber)
		{
			cout << array[i] << " ";
			count++;
		}
	}

	if (count == 0)
	{
		cout << "None";
	}
}