#include <iostream>

using namespace std;

#define OUT

void reverseNumber(int k, OUT int& result)
{
    result = 0;
    int remainder = 0;

    while (k != 0) 
    {
        remainder = k % 10;
        result = result * 10 + remainder;
        k /= 10;
    }
}

int main()
{
    int first, second, third, fourth, fifth,
	firstNumResult, secondNumResult, thirdNumResult, fourthNumResult, fifthNumResult;

    cout << "First number: ";
    cin >> first;

    reverseNumber(first, firstNumResult);
    cout << "First number reversed: " << firstNumResult << endl;

	cout << "Second number: ";
    cin >> second;

    reverseNumber(second, secondNumResult);
    cout << "Second number reversed: " << secondNumResult << endl;

	cout << "Third number: ";
    cin >> third;

    reverseNumber(third, thirdNumResult);
    cout << "Third number reversed: " << thirdNumResult << endl;

    cout << "Fourth number: ";
    cin >> fourth;

	reverseNumber(fourth, fourthNumResult);
    cout << "Fourth number reversed: " << fourthNumResult << endl;

	cout << "Fifth number: ";
    cin >> fifth;

	reverseNumber(fifth, fifthNumResult);
    cout << "Fifth number reversed: " << fifthNumResult << endl;
}