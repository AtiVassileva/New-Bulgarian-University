#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    int quotient;
    double remainder;

    if (a >= b)
    {
        quotient = a / b;
        remainder = a % b;
    }
    else
    {
        quotient = b / a;
        remainder = b % a;
    }

    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;
}