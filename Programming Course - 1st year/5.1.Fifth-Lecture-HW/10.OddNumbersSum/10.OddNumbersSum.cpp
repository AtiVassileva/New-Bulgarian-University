#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	while (n < 1 || n > 25)
	{
		cout << "Numbers count should be between 1 and 25. Try again: ";
		cin >> n;
	}

	const auto numbers = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> numbers[i];
	}

	int oddNumbersSum = 0;

	for (int i = 0; i < n; i++)
	{
		if (numbers[i] % 2 == 1)
		{
			oddNumbersSum += numbers[i];
		}
	}

	oddNumbersSum > 0
		? cout << oddNumbersSum << endl
		: cout << "NO" << endl;

	delete[] numbers;
}