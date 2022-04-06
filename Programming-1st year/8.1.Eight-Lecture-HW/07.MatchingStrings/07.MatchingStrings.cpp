#include <iostream>
#include <string>
#include <set>

using namespace std;

void printCommonCharacters(const set<char>& commonCharacters)
{
	for (const auto element : commonCharacters)
	{
		cout << element << " ";
	}

	cout << endl;
}

int findCommonCharacters(const string& firstString,
	const string& secondString)
{
	set<char> commonCharacters;

	for (const auto symbol : firstString)
	{
		if (symbol != ' ' && symbol != '\n'
			&& symbol != '\0')
		{
			if (secondString.find(symbol) != string::npos)
			{
				commonCharacters.insert(symbol);
			}
		}
	}

	for (const auto symbol : secondString)
	{
		if (symbol != ' ' && symbol != '\n'
			&& symbol != '\0')
		{
			if (firstString.find(symbol) != string::npos)
			{
				commonCharacters.insert(symbol);
			}
		}
	}

	printCommonCharacters(commonCharacters);

	return commonCharacters.size();
}

int main()
{
	string firstString;
	cout << "First string: ";
	getline(cin, firstString);

	string secondString;
	cout << "Second string: ";
	getline(cin, secondString);

	cout << "Matching characters: " << endl;

	const auto count = findCommonCharacters(firstString, secondString);

	cout << "Count: " << count << endl;
}
