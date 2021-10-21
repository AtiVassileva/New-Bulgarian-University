#include <iostream>
#include <string>
#include <bitset>
#include <sstream>

using namespace std;

int main()
{
	int number;
	cout << "Number: ";
	cin >> number;

	string binary = bitset<8>(number).to_string();
	cout << stoi(binary) << endl;

	int rem, i = 1, octalNumber = 0;
	while (number != 0)
	{
		rem = number % 8;
		number /= 8;
		octalNumber += rem * i;
		i *= 10;
	}

	stringstream stream;
	stream << hex << number;
	string res(stream.str());

	cout << "Hex: " << res;
}