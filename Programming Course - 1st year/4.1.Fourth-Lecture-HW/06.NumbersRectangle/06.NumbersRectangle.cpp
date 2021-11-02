#include <iostream>

using namespace std;

int main()
{
	unsigned rows;
	cout << "Number of rows: ";
	cin >> rows;

	for (unsigned i = 0; i < rows + 1; i++)
	{
		for (unsigned j = 1; j <= i; j++)
		{
			cout << j;
		}

		for (unsigned k = i; k < rows; k++)
		{
			cout << "0";
		}

		for (unsigned l = i; l < rows; l++)
		{
			cout << "0";
		}

		for (unsigned m = i; m >= 1; m--) 
		{
			cout << m;
		}

		cout << "\n";
	}
}