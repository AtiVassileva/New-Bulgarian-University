#include <iostream>
#include <string>

using namespace std;

string getHashCode(const char* text)
{
	string result;

	for (int i = 0; i < strlen(text); i++)
	{
		const char currentSymbol = text[i];
		result += to_string((int)currentSymbol);
	}

	return result;
}

int main()
{
	char text[1000];
	text[999] = '\0';

	cout << "Text: ";
	cin.get(text, 1000);

	const auto result = getHashCode(text);

	cout << "Hash code: " << result << endl;
}