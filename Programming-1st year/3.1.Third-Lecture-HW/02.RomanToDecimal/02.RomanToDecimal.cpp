#include <iostream>
#include <map>

using namespace std;

int main()
{
	string romanNumber;
	cout << "Please enter a Roman Numeral: ";
	cin >> romanNumber;

	map<char, int> romanDecimalEquivalents = 
	{
		{'M', 1000},
		{'D', 500},
		{'C', 100},
		{'L', 50},
		{'X', 10},
		{'V', 5},
		{'I', 1}
	};

	int result = 0;

	for (int i = 0; i < romanNumber.size() - 1; ++i)
	{
		romanDecimalEquivalents[romanNumber[i]] < romanDecimalEquivalents[romanNumber[i + 1]]
		? result -= romanDecimalEquivalents[romanNumber[i]]
		: result += romanDecimalEquivalents[romanNumber[i]];
	}

	result += romanDecimalEquivalents[romanNumber[romanNumber.size() - 1]];

	cout << "Decimal equivalent: " << result;
}