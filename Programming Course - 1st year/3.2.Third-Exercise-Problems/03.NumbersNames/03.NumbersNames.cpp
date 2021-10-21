#include <iostream>

using namespace std;

int main()
{
    const string InvalidInputMessage = "Invalid input!";

    int number;
    cout << "Number (0-9): ";
    cin >> number;

    if (!cin || number < 0 || number > 9)
    {
        cout << InvalidInputMessage << endl;
        return 1;
    }

    string result;

    switch (number)
    {
		case 0:
        result = "Zero";
        break;
    	case 1:
        result = "One";
        break;
    	case 2:
        result = "Two";
        break;
    	case 3:
        result = "Three";
        break;
    	case 4:
        result = "Four";
        break;
    	case 5:
        result = "Five";
        break;
    	case 6:
        result = "Six";
        break;
    	case 7:
        result = "Seven";
        break;
    	case 8:
        result = "Eight";
        break;
    	case 9:
        result = "Nine";
        break;
		default:
            cout << InvalidInputMessage << endl;
            return 2;
    }

    cout << number << " - " << result << endl;
}