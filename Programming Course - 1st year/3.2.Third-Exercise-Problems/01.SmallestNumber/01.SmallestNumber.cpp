#include <iostream>

using namespace std;

int main()
{
	const string WrongInputMessage = "Wrong input";

	double first, second, third;

	cout << "First number: ";
	cin >> first;

	if (!cin)
	{
		cout << WrongInputMessage << endl;
		return 1;
	}

	cout << "Second number: ";
	cin >> second;

	if (!cin)
	{
		cout << WrongInputMessage << endl;
		return 2;
	}

	cout << "Third number: ";
	cin >> third;

	if (!cin)
	{
		cout << WrongInputMessage << endl;
		return 3;
	}

	cout << "The smallest of the three numbers is: ";

	if (first < second && first < third)
	{
		cout << first;
	}
	else if(second < first && second < third)
	{
		cout << second;
	}
	else if (third < first && third < second)
	{
		cout << third;
	}
}