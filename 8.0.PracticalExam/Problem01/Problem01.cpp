#include <iostream>

using namespace std;

void printArray(const int n, const int* array)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}

	cout << endl;
}

int main()
{
	int n;
	cout << "Enter a value for n: ";
	cin >> n;

	if (!cin)
	{
		cout << "Bad input!" << endl;
		return 1;
	}

	while (n <= 0)
	{
		cout << "Error! Please enter a positive value for n: ";
		cin >> n;
	}

	const auto firstArray = new int[n];

	for (int i = 0; i < n; i++)
	{
		cout << "array[" << i << "] = ";
		cin >> firstArray[i];
	}

	const auto secondArray = new int[n];
	int counter = 0;

	for (int i = 0; i < n; i += 2)
	{
		secondArray[counter++] = firstArray[i];
	}

	for (int i = 1; i <= n; i += 2)
	{
		secondArray[counter++] = firstArray[i];
	}

	//Printing arrays
	printArray(n, firstArray);
	printArray(n, secondArray);

	delete[] firstArray;
	delete[] secondArray;
}