#include <iostream>

using namespace std;

int main()
{
	cout << "Type 'end' to stop the program" << endl;
	cout << "Type an expression: \n";

	while (true)
	{
		int firstOperand, secondOperand;
		char mathOperator;

		cin >> firstOperand;

		cin >> mathOperator;
		cin >> secondOperand;

		switch (mathOperator)
		{
		case '+':
			cout << "Result: " << firstOperand + secondOperand << endl;
			break;
		case '-':
			cout << "Result: " << firstOperand - secondOperand << endl;
			break;
		case '*':
			cout << "Result: " << firstOperand * secondOperand << endl;
			break;
		case '/':
			cout << "Result: " << firstOperand / secondOperand << endl;
			break;
		case '%':
			cout << "Result: " << firstOperand % secondOperand << endl;
			break;
		default:
			goto poo;
		}
	}

poo:;
}
