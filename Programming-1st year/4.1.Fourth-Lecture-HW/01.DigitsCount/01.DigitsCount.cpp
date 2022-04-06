#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number;
    cout << "Number: ";
    cin >> number;

    unsigned digitsCount = 0;

    for (int i = 1; i <= to_string(number).length(); i++)
    {
        digitsCount++;
    }

    cout << "Digits count: " << digitsCount;
}