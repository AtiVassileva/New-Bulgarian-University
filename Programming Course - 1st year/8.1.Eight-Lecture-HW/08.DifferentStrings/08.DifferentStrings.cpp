#include <iostream>
#include <string>

using namespace std;

int countDifferentWords(const string& firstString,
	const string& secondString)
{
	int count = 0;

	string currentWord;

	for (const auto symbol : firstString)
	{
		if (symbol == ' ' || symbol == '\n'
			|| symbol == '\0')
		{
			if (secondString.find(currentWord) != string::npos)
			{
				count++;
			}

			currentWord = "";
		}
		else
		{
			currentWord += symbol;
		}
	}

	return count;
}

int main()
{
	string firstString;
	cout << "First string: ";
	getline(cin, firstString);

	string secondString;
	cout << "Second string: ";
	getline(cin, secondString);

	const auto count = countDifferentWords(firstString, secondString);

	cout << "Different words: " << count << endl;
}
