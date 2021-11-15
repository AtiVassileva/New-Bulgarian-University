#include <iostream>

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

	int counter = 0;

	for (int i = 0; i < n; i++)
	{
		const int currentNumber = numbers[i];

		if (currentNumber < i)
		{
			numbers[i] = pow(numbers[i], 2);
		}
		else if (currentNumber == i)
		{
			numbers[i] = currentNumber * -1;
		}
		else if (currentNumber > i)
		{
			numbers[i]--;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << numbers[i] << " ";
	}

	delete[] numbers;
}