#include <iostream>

using namespace std;

int main()
{
	string number;
	cout << "Number: ";
	cin >> number;

	string result;

	for (unsigned i = 0; i <= number.length() - 1; i++) 
	{
		if (i == 0)
		{
			result[number.length() - 1] = number[i];
		}
		else if (i == number.length() - 1)
		{
			result[0] = number[i];
		}
		else
		{
			result += number[i + 1];
		}
	}

	cout << "Result: " << result;
}