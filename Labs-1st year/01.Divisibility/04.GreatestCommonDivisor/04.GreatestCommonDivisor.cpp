#include <iostream>
#include<conio.h>

using namespace std;

void main()
{
    int a, b, c;
    int gcd, currentNumber;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << "c: ";
    cin >> c;

    gcd = 1;
    currentNumber = 1;

    while (currentNumber <= a && currentNumber <= b && currentNumber <= c)
    {
        if (a % currentNumber == 0 
            && b % currentNumber == 0 
            && c % currentNumber == 0)
        {
            gcd = currentNumber;
        }

        currentNumber++;
    }

    cout << "Greatest Common Divisor: " << gcd;
}