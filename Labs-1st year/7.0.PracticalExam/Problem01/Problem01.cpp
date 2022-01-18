#include <iostream>

using namespace std;

int main()
{
    char text[1000];
    text[999] = '\0';

    cout << "Text: ";
    cin.get(text, 1000);

    const int textLength = strlen(text);

    auto result = new char[textLength + 1];

    result[textLength] = '\0';

    for (int i = 0; i < textLength; i++)
    {
        char currentSymbol = text[i];

        if (currentSymbol == 'Z' || currentSymbol == 'z')
        {
            result[i] = ' ';
        }
        else if (currentSymbol == ' ')
        {
            result[i] = 'A';
        }
        else
        {
            result[i] = (char)currentSymbol + 1;
        }
    }

    cout << "Initial text: " << text << endl;
    cout << "Result: " << result << endl;
}