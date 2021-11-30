#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;

    cout << "Enter text:" << endl;
    getline(cin, text);

    int words = 1;

    for (const auto symbol : text)
    {
	    if (symbol == ' ' || symbol == '\n')
	    {
            words++;
	    }
    }

    cout << "Words count: " << words << endl;
}