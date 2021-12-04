#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string text;

    cout << "Enter text:" << endl;
    getline(cin, text);

	auto numbers = vector<int>();

    for (const char symbol : text)
    {
	    if (isdigit(symbol))
	    {
            numbers.push_back(symbol);
	    }
    }

    cout << "Numbers in text: " << endl;

    for (const char number : numbers)
    {
        cout << number << " ";
    }
}