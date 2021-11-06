#include <iostream>
#include <string>

using namespace std;

int main()
{
	int number;
	cout << "Number: ";
	cin >> number;

	string result;

	for (auto digit : to_string(number))
	{
		switch (digit)
		{
		case '1':
			result += '!';
			break;
		case '3':
			result += 'E';
			break;
		case '5':
			result += 'S';
			break;
		case '7':
			result += 'T';
			break;
		case '8':
			result += '$';
			break;
		default:
			result += digit;
		}
	}

	cout << "Result: " << result;
}