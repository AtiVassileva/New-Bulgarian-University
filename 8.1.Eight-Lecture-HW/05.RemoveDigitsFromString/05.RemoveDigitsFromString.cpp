#include <iostream>

using namespace std;

char* removeDigits(char* input)
{
	for (int i = 0; input[i] != '\0'; ++i) 
	{
		while (!(tolower(input[i]) >= 'a' 
			&& tolower(input[i]) <= 'z'
			|| input[i] == '\0')) 
		{
			for (int j = i; input[j] != '\0'; ++j) 
			{
				input[j] = input[j + 1];
			}
		}
	}

	return input;
}

int main()
{
    char input[200];
    cin.getline(input, sizeof(input));
    
    cout << "With digits: " << input << endl;

    const auto result = removeDigits(input);
    cout << "Without digits: " << result;
}
