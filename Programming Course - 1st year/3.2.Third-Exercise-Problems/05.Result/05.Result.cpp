#include <iostream>

using namespace std;

int main()
{
    const string InvalidInputMessage = "Error! Invalid input!";

    int result;
    cout << "Result: ";
    cin >> result;

    if (!cin || result < 1 || result > 5)
    {
        cout << InvalidInputMessage << endl;
        return 1;
    }

    string output;

    switch (result)
    {
    case 1:
        output = "Bad";
        break;
    case 2:
        output = "Unsatisfactory";
        break;
    case 3:
        output = "Satisfactory";
        break;
    case 4:
        output = "Good";
        break;
    case 5:
        output = "Excellent";
        break;
    }

    cout << output << endl;
}