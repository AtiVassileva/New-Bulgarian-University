#include <iostream>
#include <string>

using namespace std;

int main()
{
	int offset, range;
	cout << "Offset: ";
	cin >> offset;

	cout << "Range: ";
	cin >> range;

	int randomNumber = offset + (rand() % range);

	string numberAsString = to_string(randomNumber);
	int digitsCount = numberAsString.size();

	if (digitsCount <= 3)
	{
		cout << "Your number is " << randomNumber << "."
			" It consists of:" << endl;
		for (char digit : numberAsString)
		{
			cout << digit << endl;
		}
	}
}