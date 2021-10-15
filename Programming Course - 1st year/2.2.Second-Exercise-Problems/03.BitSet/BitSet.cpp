#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Please enter a number: ";
    cin >> number;

    int bit;
    cout << "Please number of bit: ";
    cin >> bit;

    (number & (1 << (bit - 1)))
        ? cout << "Bit " << bit << " is 1."
        : cout << "Bit " << bit << " is NOT 1.";
}
