#include <iostream>

using namespace std;

int main()
{
	const string CongratsMessage = "Perfect! Keep going!";
	const string FinishMessage = "You are great! Thank you for participating in our game! See you xx";

	cout << "Hello User! Let's play a game! :)\nEnter a value for each of the following data types:" << endl;

	int number;
	cout << "Integer: ";
	cin >> number;

	cout << CongratsMessage << endl;

	char symbol;
	cout << "Character (only one symbol): ";
	cin >> symbol;

	cout << CongratsMessage << endl;

	bool flag;
	cout << "Boolean (only true or false - use 1 for true and 0 for false): ";
	cin >> flag;
	cout << CongratsMessage << endl;

	double pointFloatingNumber;
	cout << "Double: (point-floating number): ";
	cin >> pointFloatingNumber;
	cout << FinishMessage << endl;
}
