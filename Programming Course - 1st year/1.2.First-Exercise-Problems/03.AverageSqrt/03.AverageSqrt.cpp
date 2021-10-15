#include <iostream>

using namespace std;

int main()
{
    double firstNumber, secondNumber, thirdNumber;

    cout << "First number: ";
    cin >> firstNumber;

    cout << "Second number: ";
    cin >> secondNumber;

    cout << "Third number: ";
    cin >> thirdNumber;

    double result = sqrt(firstNumber) + sqrt(secondNumber)
	+ sqrt(thirdNumber);

    cout << "Result: " << result << endl;
}
