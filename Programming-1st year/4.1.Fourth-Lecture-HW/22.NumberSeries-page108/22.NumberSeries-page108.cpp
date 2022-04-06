#include <iostream>

using namespace std;

int main()
{
	unsigned n;
	cout << "n: ";
	cin >> n;

	for (unsigned i = 1; i <= n; i++)
	{
		const double base = (1 + (1.00 / i));
		const double currentNumber = pow(base, i);

		cout << currentNumber << endl;
	}
}