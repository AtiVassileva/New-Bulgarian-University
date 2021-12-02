#include <iostream>

using namespace std;


void printArray(const int n, const int* array)
{
	constexpr int arrayDefaultValue = -842150451;

	for (int i = 0; i < n; i++)
	{
		if (array[i] != arrayDefaultValue)
		{
			cout << array[i] << " ";
		}
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

	const auto array = new int[n];

	for (int i = 0; i < n; i++)
	{
		cout << "array[" << i << "] = ";
		cin >> array[i];
	}

	int counter = 0;
	const auto biggerElements = new int[n];

	for (int i = 0; i < n - 1 ; i++)
	{
		if (array[i] > array[i + 1])
		{
			biggerElements[counter++] = array[i];
		}
	}

	cout << "Number of elements bigger than their right neighbor: " << counter << endl;

	//Ordering bigger elements array
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (biggerElements[i] > biggerElements[j])
			{
				const int temp = biggerElements[i];
				biggerElements[i] = biggerElements[j];
				biggerElements[j] = temp;
			}
		}
	}

	cout << "Elements bigger than their right neighbor ordered by ascending: " << endl;
	printArray(n, biggerElements);

	delete[] array;
	delete[] biggerElements;
}