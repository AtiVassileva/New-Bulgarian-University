#include <iostream>

using namespace std;

int main() {

    int number;

    cout << "Number: ";
    cin >> number;

    int result = 0;

    while (number != 0) 
    {
	    const int remainder = number % 10;
        result = result * 10 + remainder;
        number /= 10;
    }

    cout << "Result: " << result;
}