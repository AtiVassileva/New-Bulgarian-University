#include <algorithm>
#include <iostream>
#include <random>

using namespace std;

int main()
{
	int n;
	cout << "n: ";
	cin >> n;

	while (n < 1 || n > 100)
	{
		cout << "Numbers count should be between 1 and 100. Try again: ";
		cin >> n;
	}

	const auto numbers = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> numbers[i];
	}
	
	cout << "Elements in reversed order: ";

	for (int i = n - 1; i >= 0; --i)
	{
		cout << numbers[i] << " ";
	}

	cout << endl;
	cout << "Elements on even positions: ";

	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			cout << numbers[i] << " ";
		}
	}

	cout << endl;
	cout << "Elements on odd positions: ";

	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 1)
		{
			cout << numbers[i] << " ";
		}
	}

	cout << endl;
	cout << "Elements in random shuffle: ";

	/*shuffle(numbers[0], numbers[n - 1], std::mt19937(std::random_device()()));

	for (int i = 0; i < n; i++)
	{
		cout << numbers[i] << " ";
	}*/

	delete[] numbers;
}