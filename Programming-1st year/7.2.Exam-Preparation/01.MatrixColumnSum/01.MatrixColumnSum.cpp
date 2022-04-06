#include <iostream>

using namespace std;

int main()
{
    int rows, cols, sum = 0;

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

    auto matrix = new int*[rows];

    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new int[cols];
    }

    for (int row = 0; row < rows; row++)
    {
	    for (int col = 0; col < cols; col++)
	    {
            cout << "matrix[" << row << "] [" << col << "] = ";
            cin >> matrix[row][col];
	    }
    }

    for (int row = 0; row < rows; row++)
    {
	    for (int col = 0; col < cols; col++)
	    {
            cout << matrix[row][col];
	    }

        cout << endl;
    }

    for (int col = 0; col < cols; col++)
    {
        sum = 0;
	    for (int row = 0; row < rows; row++)
	    {
            sum += matrix[col][row];
	    }
        cout << "Column " << col + 1 << " sum = " << sum << endl;
    }

    delete[] matrix;
}
