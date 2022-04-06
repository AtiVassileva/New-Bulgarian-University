#include <iostream>

using namespace std;

int main()
{
	unsigned n;
	cout << "n: ";
	cin >> n;

	double x;
	cout << "x: ";
	cin >> x;

	double numerator = 1;
	double denominator = 1;

	for (unsigned i = 1; i <= n; i++)
	{
		numerator *= x - pow(2, i);
		denominator *= x - (pow(2, i) + 1);
	}

	double y = numerator / denominator;
	cout << "y = " << y;
}