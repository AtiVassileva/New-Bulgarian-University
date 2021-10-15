#include <iostream>

using namespace std;

int main()
{
	int number;
	cout << "Please enter a number: ";
	cin >> number;

	(number & 1) == 0
	? cout << "Even"
	: cout << "Odd";
}
