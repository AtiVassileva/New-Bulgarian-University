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

	int evenNumbersProduct = 1;

	for (int i = 0; i < n; i++)
	{
		if (numbers[i] % 2 == 0)
		{
			evenNumbersProduct *= numbers[i];
		}
	}

	evenNumbersProduct > 1
		? cout << evenNumbersProduct << endl
		: cout << "NO" << endl;

	delete[] numbers;
}