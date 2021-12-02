#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;

    cout << "Enter text:" << endl;
    getline(cin, text);

    int vowels = 0;

    for (const auto letter : text)
    {
	    if (tolower(letter) == 'a' || tolower(letter) == 'e' || tolower(letter) == 'i' || tolower(letter) == 'u' || tolower(letter) == 'o')
	    {
            vowels++;
	    }
    }

    cout << "Vowels count: " << vowels << endl;
}