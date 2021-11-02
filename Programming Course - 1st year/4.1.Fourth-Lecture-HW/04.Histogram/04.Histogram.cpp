#include <iostream>
#include <map>

using namespace std;

int main()
{
	int number;
	cout << "Number: ";
	cin >> number;

	map<int, int> numberOccurrences = {
		{0, 0},
		{1, 0},
		{2, 0},
		{3, 0},
		{4, 0},
		{5, 0},
		{6, 0},
		{7, 0},
		{8, 0},
		{9, 0},
	};

	while (number != 0)
	{
		const int currentDigit = number % 10;

		switch (currentDigit)
		{
		case 0: numberOccurrences[0]++; break;
		case 1: numberOccurrences[1]++; break;
		case 2: numberOccurrences[2]++; break;
		case 3: numberOccurrences[3]++; break;
		case 4: numberOccurrences[4]++; break;
		case 5: numberOccurrences[5]++; break;
		case 6: numberOccurrences[6]++; break;
		case 7: numberOccurrences[7]++; break;
		case 8: numberOccurrences[8]++; break;
		case 9: numberOccurrences[9]++; break;
		default:;
		}

		number = number / 10;
	}

	for (auto const& pair : numberOccurrences)
	{
		cout << pair.first << "/" << pair.second << " ";
	}
}