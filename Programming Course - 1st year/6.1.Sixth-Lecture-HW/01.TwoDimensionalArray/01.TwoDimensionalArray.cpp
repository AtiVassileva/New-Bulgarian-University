#include <iostream>

using namespace std;

int main()
{
	int rows, cols;

	cout << "Rows: ";
	cin >> rows;

	cout << "Columns: ";
	cin >> cols;

	const auto two_dimensional_array = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			two_dimensional_array[i][j] = 
				-12 + rand() % (122 + 1 + 12);
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << two_dimensional_array[i][j] << " ";
		}

		cout << endl;
	}

	delete[] two_dimensional_array;
}
