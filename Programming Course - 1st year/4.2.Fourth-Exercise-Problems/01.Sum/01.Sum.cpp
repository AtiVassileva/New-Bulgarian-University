#include <iostream>

using namespace std;

unsigned findFactorial(unsigned number)
{
	unsigned factorial = 1;

	for (unsigned i = 1; i <= number; i++)
	{
		factorial *= i;
	}

	return factorial;
}

int main()
{
	double x;
	unsigned n;

	cout << "x: ";
	cin >> x;
	cout << "n: ";
	cin >> n;

	double sum = 1;

	for (unsigned i = 1; i <= n; i++)
	{
		sum += pow(x, i) / findFactorial(i);
	}

	cout << "Sum: " << sum;
}