#include <iostream>
#include <string>

using namespace std;

auto replaceWord(string text, const string& wordToReplace, 
	const string& replacement)
{
	while (true)
	{
		const auto position = text.find(wordToReplace);

		if (position == string::npos)
		{
			break;
		}

		text.replace(position, wordToReplace.length(), replacement);
	}

	return text;
}

int main()
{
    string text;
	cout << "Text: ";
    getline(cin, text);

    string wordToReplace;
	cout << "Word to replace: ";
    getline(cin, wordToReplace);

    string replacement;
	cout << "Replacement: ";
    getline(cin, replacement);

    text = replaceWord(text, wordToReplace, replacement);

    cout << text << endl;
}