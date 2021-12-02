#include <iostream>

using namespace std;

int main()
{
    int n, m;

	cout << "Enter a value for n: ";
	cin >> n;

	if (!cin)
	{
		cout << "Bad input!" << endl;
		return 1;
	}

	while (n <= 1 && n > 20)
	{
		cout << "Error! N should be between 1 and 20. Try again: ";
		cin >> n;
	}

	cout << "Enter a value for m: ";
	cin >> m;

	if (!cin)
	{
		cout << "Bad input!" << endl;
		return 2;
	}

	while (m <= 1 && m > 30)
	{
		cout << "Error! M should be between 1 and 30. Try again: ";
		cin >> m;
	}

	const auto matrix = new int*[n];

	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}

	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < m; col++)
		{
			cout << "matrix[" << row << "] [" << col << "] = ";
			cin >> matrix[row][col];
		}
	}

	//Printing matrix
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < m; col++)
		{
			cout << matrix[row][col];
		}

		cout << endl;
	}

	int rowToMatch;
	cout << "Row to match: ";
	cin >> rowToMatch;

    while (rowToMatch < 0 && rowToMatch > n)
    {
		cout << "Please enter a valid row number: ";
		cin >> rowToMatch;
    }

	int counter = 0;
	
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < m; col++)
		{
			if (matrix[rowToMatch][col] == matrix[row][col]
				&& rowToMatch != row)
			{
				counter++;
			}
		}

		if (counter == m)
		{
			cout << "Matching row found! Index: " << row << endl;
		}

		counter = 0;
	}
}