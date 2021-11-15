#include <iostream>

using namespace std;

int main()
{
	int n, p, q;
	cout << "n: ";
	cin >> n;

	while (n < 1 || n > 100)
	{
		cout << "Numbers count should be between 1 and 100. Try again: ";
		cin >> n;
	}

	cout << "p: ";
	cin >> p;
	cout << "q: ";
	cin >> q;

	const auto numbers = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> numbers[i];
	}

	int counter = 0;

	for (int i = 0; i < n; i++)
	{
		const int currentNumber = numbers[i];

		if (currentNumber % 2 == 0 
			&& i % 2 != 0 
			&& currentNumber >= p
			&& currentNumber <= q)
		{
			counter++;
		}
	}

	cout << "Even numbers on odd indexes count: "
	<< counter << endl;

	delete[] numbers;
}