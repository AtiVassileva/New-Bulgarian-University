#include <iostream>

using namespace std;

int main()
{
	int number;
	cout << "Number: ";
	cin >> number;

	int factorial = 1;

	while (number != 0)
	{
		factorial *= number;

		number > 0
		? number--
		: number++;
	}

	cout << "Factorial: " << factorial;
}