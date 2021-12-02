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

	const auto array = new int[n];

	for (int i = 0; i < n; i++)
	{
		cout << "array[" << i << "] = ";
		cin >> array[i];
	}

	int counter = 0;

	for (int i = 0; i < n - 1 ; i++)
	{
		if (array[i] > array[i + 1])
		{
			counter++;
		}
	}

	cout << "Number of elements bigger than their right neighbor: " << counter << endl;

	cout << "Array printed in original order: " << endl;
	printArray(n, array);

	//Ordering array
	for (int i = 0; i < n;i++)
	{
		for (int j = i + 1; j < n;j++)
		{
			if (array[i] > array[j])
			{
				const int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	cout << "Array printed with elements in ascending order: " << endl;
	printArray(n, array);
}