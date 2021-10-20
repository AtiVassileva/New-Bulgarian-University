#include <iostream>

using namespace std;

#define MIN 10
#define MAX 100

int main()
{
	double number;
	cout << "Your number: ";
	cin >> number;
	
	number <= MAX && number >= MIN
		? cout << "Number in range." << endl
		: cout << "Number out of range." << endl;
}