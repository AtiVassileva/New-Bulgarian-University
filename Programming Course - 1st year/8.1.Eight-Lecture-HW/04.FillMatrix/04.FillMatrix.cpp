#include <iostream>

using namespace std;

int** fillMatrix(int** matrix, int rows, int cols)
{
	for (int row = 0; row < rows; row++)
	{
        for (int col = 0; col < cols; col++)
        {
            int number;
            cout << "matrix[" << row << "][" << col << "] = ";
            cin >> number;

            if (row % 2 == 0)
            {
                matrix[row][col] = number;
            }
            else
            {
                matrix[row][cols - col - 1] = number;
            }
        }
	}

    return matrix;
}

void printMatrix(int** matrix, int rows, int cols)
{
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
            cout << matrix[row][col] << " ";
		}

        cout << endl;
	}
}

int main()
{
    int rows, cols;

    cout << "Rows: ";
    cin >> rows;

    cout << "Columns: ";
    cin >> cols;

    auto matrix = new int* [rows];

    for (int i = 0; i < cols; i++)
    {
        matrix[i] = new int[cols];
    }

    matrix = fillMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);
}