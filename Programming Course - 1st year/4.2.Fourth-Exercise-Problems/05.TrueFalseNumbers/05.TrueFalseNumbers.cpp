#include <iostream>
#include <string>

using namespace std;

int main()
{
	int number;
	cout << "Number: ";
	cin >> number;

	if (to_string(number).length() < 3)
	{
		cout << "Number should contain at least 3 digits. Try again: ";
		cin >> number;
	}

	unsigned x;
	cout << "x: ";
	cin >> x;

	bool containtsX = false;

	while (number != 0)
	{
		unsigned current = number % 10;
		cout << current << endl;

		if (current == x)
		{
			containtsX = true;
		}

		number /= 10;
	}

	string result = 
		containtsX == 1
		? "True"
		: "False";

	cout << "Containts x - " << result << endl;
}