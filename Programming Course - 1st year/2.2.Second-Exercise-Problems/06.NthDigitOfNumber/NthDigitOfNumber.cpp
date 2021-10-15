#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Number: ";
    cin >> number;

    int position;
    cout << "Position: ";
    cin >> position;
    
    int result = (int)(number / (pow(10, position - 1))) % 10;

    cout << "The digit on position " << position << " is " << result;
}