#include <iostream>

using namespace std;

int main()
{
	int number;

	cout << "Number: ";
	cin >> number;

	do
	{
		cout << "Number should be between 1000 and 9999! Try again: ";
		cin >> number;
	}
	while (number < 1000 || number > 9999);

	int x, y;

	x = (number / 1000) * 10;

	cout << x << endl;

	return 0;
}