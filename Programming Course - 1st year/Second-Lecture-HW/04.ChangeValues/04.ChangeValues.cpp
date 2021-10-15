#include <iostream>

using namespace std;

int main()
{
    int firstNum, secondNum;
    cout << "Let's change values of two variables using XOR:";

    cout << "First number : ";
    cin >> firstNum;

    cout << "Second number: ";
    cin >> secondNum;

    firstNum = firstNum ^ secondNum;
    secondNum = firstNum ^ secondNum;
    firstNum = firstNum ^ secondNum;

    cout << "Values changed! Debug to see the results.";
}