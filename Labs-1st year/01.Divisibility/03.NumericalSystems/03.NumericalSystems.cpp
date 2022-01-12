#include <iostream>
#include <string>

using namespace std;

int main()
{
	int startNumber, number, base = 0;

	cout << "Number: ";
	cin >> number;

	startNumber = number;

	while (base < 2 || base > 16)
	{
		cout << "Numerical system: ";
		cin >> base;
	}

	string result;

	while (number)
	{
		result += to_string(number % base);
		number /= base;
	}

	cout << startNumber << "(10) = " << string(result.rbegin(), result.rend()) << "(" << base << ")" << endl;
}