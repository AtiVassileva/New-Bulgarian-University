#include <iostream>

using namespace std;

int* fillArray(int[], int);
void printArray(int[], int);
int* reverseArray(int[], int);

int main()
{
	int length;
	cout << "Array length: ";
	cin >> length;

	auto array = new int[length];

	fillArray(array, length);
	printArray(array, length);

	auto result = reverseArray(array, length);
	printArray(result, length);
}

int* fillArray(int array[], int length) 
{
	for (int i = 0; i < length; i++)
	{
		array[i] = rand();
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

int* reverseArray(int array[], int length)
{
	auto result = new int[length]{0};

	int start = 0;
	int end = length - 1;

	while (start < length)
	{
		int temp = array[start];
		result[start] = array[end];
		result[end] = temp;
		start++;
		end--;
	}

	return result;
}