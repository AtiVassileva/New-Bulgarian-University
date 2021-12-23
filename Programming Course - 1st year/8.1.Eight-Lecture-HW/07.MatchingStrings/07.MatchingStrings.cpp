#include <iostream>
#include <string>

using namespace std;

int countMatchingWords(const string& firstString, 
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

    const auto count = countMatchingWords(firstString, secondString);

    cout << "Matching words: " << count << endl;
}
