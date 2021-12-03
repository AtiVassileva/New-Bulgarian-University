#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*string text;

    cout << "Enter text:" << endl;
    getline(cin, text);

    int arrayLength = 0;

    for (const char symbol : text)
    {
	    if (isdigit(symbol))
	    {
            arrayLength++;
	    }
    }

    const auto numbers = new int[arrayLength];

    int position = 0;

    for (const char symbol : text)
    {
        if (isdigit(symbol))
        {
            numbers[position] = symbol;
            position++;
        }
    }

	for (int i = 0; i < arrayLength; i++)
    {
        cout << numbers[i] << " ";
    }

    delete[] numbers;*/

    int a, b, c, d;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    
    int result = ((a + b) / a) - ((c + d) / c) * (((a - c) + (b - d)) / (a - c));

    cout << result;

}