#include <iostream>

using namespace std;

int main()
{
	int n;
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

	int maxNumber = numeric_limits<int>::min();

	for (int i = 0; i < n; i++)
	{
		if (numbers[i] > maxNumber)
		{
			maxNumber = numbers[i];
		}
	}

	cout << "Maximum number: " << maxNumber << endl;

	delete[] numbers;
}