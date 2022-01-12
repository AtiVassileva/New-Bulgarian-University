#include <iostream>

using namespace std;

// Bit mask 

void printArray(int* array, int length);
int setPower(char*, int size);

int main()
{
	const int size = 5;
	int array[size] = { 1, 2, 3, 4, 5 };
	char bitMask [] = "10110";

	cout << "Set power: " << setPower(bitMask, size);
}

void printArray(int* array, int length) {
	for  (int i = 0; i < length; i++)
	{
		cout << array[i] << " ";
	}

	cout << endl;
}

int setPower(char* set, int size) {

	int counter = 0;

	for (int i = 0; i < size; i++)
	{
		if (set[i] == '1')
		{
			counter++;
		}
	}

	return counter;
}