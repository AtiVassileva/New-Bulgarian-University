#include <iostream>
#include <set>

using namespace std;

bool isSet(char*, int);
void printCommonElements(char*, int, char*, int);

int main()
{
    char firstString[1000];
    firstString[999] = '\0';

    cout << "First string: ";
    cin.get(firstString, 1000);

    char secondString[1000];
    secondString[999] = '\0';

	cin.ignore();

    cout << "Second string: ";
    cin.get(secondString, 1000);

	auto firstLength = strlen(firstString);
	auto secondLength = strlen(secondString);

	cout << "Is first string set? - ";
	isSet(firstString, firstLength) == 1
		? cout << "Yes" << endl
		: cout << "No" << endl;

	cout << "Is second string set? - ";
	isSet(secondString, secondLength) == 1
		? cout << "Yes" << endl
		: cout << "No" << endl;

	if (isSet(firstString, firstLength) && isSet(secondString, secondLength))
	{
		cout << "Common characters: ";

		if (firstLength > secondLength)
		{
			printCommonElements(firstString, firstLength, secondString, secondLength);
		}
		else
		{
			printCommonElements(secondString, secondLength, firstString, firstLength);
		}
	}
}

bool isSet(char* sequence, int length)
{
	for (int i = 0; i < length; i++)
	{
		char current = sequence[i];

		for (int j = i + 1; j < length; j++)
		{
			char next = sequence[j];

			if (current == next)
			{
				return false;
			}
		}
	}

	return true;
}

void printCommonElements(char* first, int firstSize, char* second, int secondSize)
{
	if (firstSize == 0 || secondSize == 0)
	{
		cout << "No common elements." << endl;
		return;
	}

	set<char> commonCharacters;

	for (int i = 0; i < firstSize; i++)
	{
		for (int j = 0; j < secondSize; j++) 
		{
			if (first[i] == second[j])
			{
				commonCharacters.insert(first[i]);
			}
		}
	}

	for (const auto element : commonCharacters)
	{
		cout << element << " ";
	}
}
