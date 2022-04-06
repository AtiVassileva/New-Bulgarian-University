#include <iostream>

using namespace std;

int main()
{
	unsigned n;
	cout << "n: ";
	cin >> n;

	double actualResult = 0;

	for (unsigned i = 1; i <= n; i++)
	{
		actualResult += pow(2 * i - 1, 3);
	}

	double expectedResult = pow(n, 2) * (2 * pow(n, 2) - 1);

	actualResult == expectedResult
		? cout << "Valid"
		: cout << "Invalid";
}