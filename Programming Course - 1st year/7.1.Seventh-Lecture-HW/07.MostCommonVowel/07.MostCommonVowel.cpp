#include <iostream>
#include <map>
#include <string>

using namespace std;

bool isVowel(const char letter)
{
	if (tolower(letter) == 'a' || tolower(letter) == 'e' || tolower(letter) == 'i' || tolower(letter) == 'u' || tolower(letter) == 'o')
	{
        return true;
	}

    return false;
}

int main()
{
    string text;

    cout << "Enter text:" << endl;
    getline(cin, text);

    auto vowelsMatches = map<char, int>();

    for (const char letter : text)
    {
	    isVowel(letter);
        if (isalpha(letter) && isVowel(letter))
        {
            !vowelsMatches.count(letter)
                ? vowelsMatches[letter] = 1
                : vowelsMatches[letter]++;
        }
    }

    char mostCommonVowel = ' ';
    int mostMatches = 0;

    for (const auto kvp : vowelsMatches)
    {
	    if (kvp.second > mostMatches)
	    {
            mostCommonVowel = kvp.first;
            mostMatches = kvp.second;
	    }
    }

    cout << "Most common vowel: " << mostCommonVowel << " - " << mostMatches << " matches." << endl;
}
