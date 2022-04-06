#include <iostream>

using namespace std;

void ToLower(char* text)
{
	for (int i = 0; i < strlen(text); i++)
	{
		const char currentSymbol = text[i];
		text[i] = tolower(currentSymbol);
	}
}

void ToUpper(char* text)
{
	for (int i = 0; i < strlen(text); i++)
	{
		const char currentSymbol = text[i];
		text[i] = toupper(currentSymbol);
	}
}

int StringCompareNotSensitive(char* first, char* second)
{
	ToLower(first);
	ToLower(second);

	return strcmp(first, second);
}

int main()
{
	int command;

	cout << "Choose action: \n" << "1. Compare two strings.\n2. Convert string to upper case.\n3. Convert string to lower case. " << endl;

	cin >> command;
	cin.ignore();

	if (command == 1)
	{
		char first[1000];
		char second[1000];

		first[999] = '\0';
		second[999] = '\0';

		cout << "First string: ";
		cin.get(first, 1000);

		cin.ignore();

		cout << "Second string: ";
		cin.get(second, 1000);

		const int result = StringCompareNotSensitive(first, second);
		cout << "Comparison result: " << result << endl;
	}
	else if (command == 2)
	{
		char text[1000];
		text[999] = '\0';

		cout << "Text: ";
		cin.get(text, 1000);

		ToUpper(text);
		cout << "Result: " << text << endl;
	}
	else if (command == 3)
	{
		char input[1000];
		input[999] = '\0';

		cout << "Text: ";
		cin.get(input, 1000);

		ToLower(input);
		cout << "Result: " << input << endl;
	}
	else
	{
		cout << "Invalid command! Please try again!" << endl;
		return -1;
	}
}