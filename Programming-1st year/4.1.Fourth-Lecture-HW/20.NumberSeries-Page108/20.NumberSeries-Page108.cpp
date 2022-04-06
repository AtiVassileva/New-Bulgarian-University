#include <iostream>

using namespace std;

int main()
{
	unsigned n;
	cout << "n: ";
	cin >> n;

	for (unsigned i = 1; i <= n; i++)
	{
		//i3 + 8 .i.n + n2
		unsigned currentNumber = pow(i, 3) + (8 * i * n)
		+ pow(n, 2);

		if (currentNumber % 3 == 0 || currentNumber % 8 == 0)
		{
			cout << currentNumber << endl;
		}
	}
}