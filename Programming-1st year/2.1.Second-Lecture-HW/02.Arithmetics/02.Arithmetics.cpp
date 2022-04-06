#include <iostream>

using namespace std;

int main()
{
	int firstNumber, secondNumber;

	cout << "First number: ";
	cin >> firstNumber;

	cout << "Second number: ";
	cin >> secondNumber;

	cout << firstNumber << " + " << secondNumber << " = "
	<< firstNumber + secondNumber << endl;

	cout << firstNumber << " - " << secondNumber << " = "
	<< firstNumber - secondNumber << endl;

	cout << secondNumber << " - " << firstNumber << " = "
	<< secondNumber - firstNumber << endl;

	cout << firstNumber << " * " << secondNumber << " = "
	<< firstNumber * secondNumber << endl;

	cout << firstNumber << " / " << secondNumber << " = "
	<< firstNumber / secondNumber << endl;

	cout <<  secondNumber << " / " <<  firstNumber << " = "
	<< secondNumber / firstNumber << endl;

	cout << firstNumber << " % " << secondNumber << " = "
	<< firstNumber % secondNumber << endl;

	cout <<  secondNumber << " % " <<  firstNumber << " = "
	<< secondNumber % firstNumber << endl;
}