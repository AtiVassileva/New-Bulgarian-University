#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    const int hundreds = number / 100;
    const int tens = (number / 10) % 10;
    const int ones = number % 10;

    cout << "Here is some information about your number:" << endl;

    cout << "Hundreds: " << hundreds << endl;
	cout << "Dozens: " << tens << endl;
	cout << "Ones: " << ones << endl;
}