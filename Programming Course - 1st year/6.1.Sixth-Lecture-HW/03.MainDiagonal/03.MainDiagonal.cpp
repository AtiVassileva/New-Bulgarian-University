#include <iostream>

using namespace std;

void printMatrix(const int rows, const int cols, int** matrix)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << matrix[i][j] << " ";
		}

		cout << endl;
	}
}

int main()
{
	int rows, cols;

	cout << "Rows: ";
	cin >> rows;

	if (!cin)
	{
		cout << "Bad input!";
		return 1;
	}

	if (rows <= 0)
	{
		cout << "Rows count should be a positive number!";
		return 2;
	}

	cout << "Columns: ";
	cin >> cols;

	if (!cin)
	{
		cout << "Bad input!";
		return 3;
	}

	if (cols <= 0)
	{
		cout << "Columns count should be a positive number!";
		return 4;
	}

	const auto matrix = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			matrix[i][j] =
				-12 + rand() % (122 + 1 + 12);
		}
	}

	cout << "Before: " << endl;
	printMatrix(rows, cols, matrix);

	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
			if (row >= col)
			{
				matrix[row][col] = pow(row + col, row);
			}
		}
	}

	cout << "After: " << endl;
	printMatrix(rows, cols, matrix);

	delete[] matrix;
}