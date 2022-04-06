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

	int minNumber = numeric_limits<int>::max();
	int maxNumber = numeric_limits<int>::min();

	for (int i = 0; i < n; i++)
	{
		if (numbers[i] < minNumber)
		{
			minNumber = numbers[i];
		}

		if (numbers[i] > maxNumber)
		{
			maxNumber = numbers[i];
		}
	}

	cout << minNumber << " " << maxNumber << endl;

	delete[] numbers;
}