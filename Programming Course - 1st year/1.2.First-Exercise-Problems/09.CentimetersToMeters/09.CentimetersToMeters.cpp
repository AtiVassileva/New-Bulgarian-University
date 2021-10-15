#include <iostream>

using namespace std;

int main()
{
	double centimeters;
	cout << "Centimeters value: ";
	cin >> centimeters;

	// 1m = 100cm
	cout.precision(3);
	double meters = centimeters / 100;

	cout << centimeters << " cm = " << meters << " m.";
}