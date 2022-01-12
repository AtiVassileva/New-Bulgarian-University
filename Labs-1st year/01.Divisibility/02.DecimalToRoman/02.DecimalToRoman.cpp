#include <iostream>

using namespace std;

int main()
{
	int number = 0;

	while (number < 1 || number > 4000)
	{
		cout << "Number: ";
		cin >> number;
	}

	string romanEquivalents[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

	int decimalNumbers[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };

	cout << "Roman Equivalent: ";

	for (int i = 0; i < 13; ++i)
	{
		while (number - decimalNumbers[i] >= 0)
		{
			cout << romanEquivalents[i];
			number -= decimalNumbers[i];
		}
	}
}