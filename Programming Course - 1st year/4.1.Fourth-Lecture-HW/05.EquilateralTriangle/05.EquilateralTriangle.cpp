#include <iostream>

using namespace std;

int main()
{
    int rows;
	char symbol;
    
    cout << "Number of rows: ";
    cin >> rows;

    cout << "Symbol: ";
    cin >> symbol;
    
    for (unsigned i = 1; i <= rows; i++)
    {
        for (unsigned j = i; j < rows; j++)
        {
            cout << " ";
        }
        
        for (unsigned k = 1; k <= 2 * i - 1; k++)
        {
            cout << symbol;
        }
        
        cout << "\n";
    }
}