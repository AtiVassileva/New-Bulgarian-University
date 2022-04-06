#include <iostream>

using namespace std;

int main()
{
    string number;
    cout << "Your number: ";
    cin >> number;

    cout << "Your number consists of: " << endl;

    for (const char digit : number)
    {
        cout << digit << endl;
    }
}