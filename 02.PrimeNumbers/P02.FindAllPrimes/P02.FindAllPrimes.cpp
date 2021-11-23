#include <iostream>

using namespace std;

int main()
{
	unsigned n;
	cout << "n: ";
	cin >> n;

	auto array = new bool[n + 1]{ false };

	for (unsigned i = 2; i <= sqrt(n); i++)
	{
		if (array[i] == false)
		{
			for (unsigned j = i * i; j <= n; j+=i)
			{
				array[j] = true;
			}
		}
	}

	for (unsigned i = 2; i <= n; i++)
	{
		if (array[i] == false)
		{
			cout << i << " ";
		}
	}

	delete[] array;
}