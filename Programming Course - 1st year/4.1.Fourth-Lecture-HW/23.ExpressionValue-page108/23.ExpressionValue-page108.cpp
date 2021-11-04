#include <iostream>

using namespace std;

int main()
{
	unsigned a, m, n;

	cout << "a: ";
	cin >> a;

	cout << "m: ";
	cin >> m;

	cout << "n: ";
	cin >> n;

	double sum = 0;
	double product = 1;

	for (unsigned i = 1; i <= n; i++)
	{
		for (unsigned j = 1; j <= m; j++)
		{
			sum += (a * 1.00 + j) / (i + j);
			product *= (a * 1.00 + j) / (i + j);
		}
	}

	cout << "Sum: " << sum << endl;
	cout << "Product: " << product << endl;
	
}