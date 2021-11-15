#include <iostream>

using namespace std;

int main()
{
	int n, p;
	cout << "n: ";
	cin >> n;

	while (n < 1 || n > 100)
	{
		cout << "Numbers count should be between 1 and 100. Try again: ";
		cin >> n;
	}

	cout << "p: ";
	cin >> p;

	while (p < 1)
	{
		cout << "P should be a positive number. Try again: ";
		cin >> p;
	}

	const auto numbers = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> numbers[i];
	}

	int firstPositiveNumberIndex = -1;

	for (int i = 0; i < n; i++)
	{
		if (numbers[i] > 0)
		{
			firstPositiveNumberIndex = i;
			break;
		}
	}

	int lastPositiveNumberIndex = -1;

	for (int i = n - 1; i >= 0; i--)
	{
		if (numbers[i] > 0)
		{
			lastPositiveNumberIndex = i;
			break;
		}
	}

	int indexOfP = -1;

	for (int i = 0; i < n; i++)
	{
		if (numbers[i] == p)
		{
			indexOfP = i;
			break;
		}
	}

	cout << "First positive number index: "
		<< firstPositiveNumberIndex << endl;

	cout << "Last positive number index: "
		<< lastPositiveNumberIndex << endl;

	cout << "Index of P: "
		<< indexOfP << endl;

	delete[] numbers;
}