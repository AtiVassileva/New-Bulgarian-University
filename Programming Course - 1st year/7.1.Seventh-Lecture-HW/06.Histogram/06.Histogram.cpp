#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    string text;

    cout << "Enter text:" << endl;
    getline(cin, text);

    auto symbolMatches = map<char, int>();

    for (const char symbol : text)
    {
        if (isalpha(symbol))
        {
            !symbolMatches.count(symbol)
                ? symbolMatches[symbol] = 1
                : symbolMatches[symbol]++;
        }
    }

    for (const auto kvp : symbolMatches)
    {
        cout << kvp.first << " - " << kvp.second << endl;
    }
}
