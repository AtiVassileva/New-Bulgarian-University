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

	int zerosCount = 0;
	int onesCount = 0;
	int twosCount = 0;

	for (int i = 0; i < n; i++)
	{
		const int currentNumber = numbers[i];

		switch (currentNumber)
		{
			case 0: 
				zerosCount++;
			break;
			case 1: 
				onesCount++;
			break;
			case 2: 
				twosCount++;
			break;
			default: continue;
		}
	}

	cout << "Zeros count: " << zerosCount << endl;
	cout << "Ones count: " << onesCount << endl;
	cout << "Twos count: " << twosCount << endl;

	delete[] numbers;
}