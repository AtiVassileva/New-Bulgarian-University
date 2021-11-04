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
		actualResult += i * pow(i + 1, 2);
	}

	double expectedResult = (n * 1.00 / 12) * (n + 1) * (n + 2)
	* (3 * n + 5);

	actualResult == expectedResult
		? cout << "Valid"
		: cout << "Invalid";
}