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

	for (int i = 0; i < n; i++)
	{
		if (i != 0 && numbers[i] % i == 0)
		{
			cout << numbers[i] << " ";
		}
	}

	delete[] numbers;
}