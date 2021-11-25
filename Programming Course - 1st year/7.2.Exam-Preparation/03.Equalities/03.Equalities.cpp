#include <iostream>

using namespace std;

int main()
{
	int k;

	cout << "k: ";
	cin >> k;

	if (!cin)
	{
		cout << "Bad input!";
		return 1;
	}

	if (k <= 0 || k > 40)
	{
		cout << "K should be between 1 and 40!";
		return 2;
	}

	auto a = new int[k];
	auto b = new int[k];

	for (int i = 0; i < k; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];

		cout << "b[" << i << "] = ";
		cin >> b[i];
	}

	int counter = 0;

	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < k; j++)
		{
			if (a[i] == b[j])
			{
				cout << a[i] << " = " << b[j] << endl;
				counter++;
			}
		}
	}

	cout << "Total equalities: " << counter;
}