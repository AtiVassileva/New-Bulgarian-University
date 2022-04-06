#include <iostream>

using namespace std;

int main()
{
    int firstNumber, secondNumber;

    cout << "First number: ";
    cin >> firstNumber;

    cout << "Second number: ";
    cin >> secondNumber;

    cout << "Result: " << endl;

    if (firstNumber > secondNumber)
    {
        firstNumber /= 5;
        secondNumber *= 3;
    }
    else
    {
        firstNumber *= 3;
        secondNumber /= 5;
    }

    cout << "First number: " << firstNumber << endl;
    cout << "Second number: " << secondNumber << endl;
}