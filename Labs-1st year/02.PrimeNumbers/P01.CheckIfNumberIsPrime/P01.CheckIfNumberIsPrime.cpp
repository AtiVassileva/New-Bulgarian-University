#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "n: ";
	cin >> n;

	bool isPrime = true;

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			isPrime = false;
			break;
		}
	}

	isPrime
	? cout << "Yes"
	: cout << "No";
}