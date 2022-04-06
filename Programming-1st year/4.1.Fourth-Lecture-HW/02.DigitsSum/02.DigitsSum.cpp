#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Number: ";
    cin >> number;

    unsigned sum = 0;

    while (number != 0)
    {
        sum += number % 10;
        number = number / 10;
    }

    cout << "Digits sum: " << sum;
}