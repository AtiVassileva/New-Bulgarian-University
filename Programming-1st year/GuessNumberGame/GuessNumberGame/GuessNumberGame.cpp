#include <iostream>

using namespace std;

int main()
{
	int randomNumber = rand();

	cout << "Enter your guess: " << endl;
	int userNumber;
	cin >> userNumber;

	int triesCount = 1;

	while (true)
	{
		if (userNumber == randomNumber)
		{
			cout << "Congratulations! It took you " << triesCount
				<< " tries to guess the magic number!" << endl;
			break;
		}

		cout << "Sorry! Try again :) ";

		if (userNumber > randomNumber)
		{
			cout << "Your number is bigger than the magic number!"
				<< endl;
		}
		else if (userNumber < randomNumber)
		{
			cout << "Your number is less than the magic number!"
				<< endl;
		}

		cin >> userNumber;
		triesCount++;
	}
}