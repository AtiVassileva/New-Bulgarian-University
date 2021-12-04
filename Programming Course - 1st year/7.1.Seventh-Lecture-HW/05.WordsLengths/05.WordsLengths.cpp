#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string text;

	cout << "Enter text:" << endl;
	getline(cin, text);

	unsigned currentLength = 0;

	auto lengths = vector<unsigned>();

	for (unsigned i = 0; i <= text.length(); i++)
	{
		const auto symbol = text[i];

			if (symbol == ' ' || symbol == '\n' 
				|| i == text.length())
			{
				lengths.push_back(currentLength);
				currentLength = 0;
			}
			else
			{
				currentLength++;
			}
	}

	cout << "Words length: " << endl;

	for (const auto length : lengths)
	{
		cout << length << " ";
	}
}