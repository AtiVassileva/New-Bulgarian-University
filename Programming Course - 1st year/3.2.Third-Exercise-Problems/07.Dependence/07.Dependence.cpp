#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Enter x: ";
    cin >> x;

    int y;

    if (x <= 2)
    {
        y = x;
    }
    else if (x > 2 && x <= 3)
    {
        y = 2;
    }
    else 
    {
        y = x - 1;
    }

    cout << "y = " << y;
}