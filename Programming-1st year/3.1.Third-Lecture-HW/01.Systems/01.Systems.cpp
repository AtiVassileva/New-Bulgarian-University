#include <iostream>
#include <string>

using namespace std;

int main()
{
	int base, number;
	cout << "Number: ";
	cin >> number;

	cout << "Numerical system: ";
	cin >> base;

	string result;

	while (number)
	{
		result += to_string(number % base);
		number /= base;
	}

	cout << "Result: " << string(result.rbegin(), result.rend()) << endl;
}