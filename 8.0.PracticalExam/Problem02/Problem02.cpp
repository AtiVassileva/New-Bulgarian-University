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

	for (int i = 0; i < n; i++)
	{
		secondArray[i] = 
			firstArray[i] < 5
			? 2 * firstArray[i]
			: firstArray[i] / 2;
	}

	//Printing arrays
	printArray(n, firstArray);
	printArray(n, secondArray);
}
