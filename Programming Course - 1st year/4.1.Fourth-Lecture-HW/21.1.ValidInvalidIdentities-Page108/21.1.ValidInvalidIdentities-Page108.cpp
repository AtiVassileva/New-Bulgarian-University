#include <iostream>

using namespace std;

int main()
{
    unsigned n;
    cout << "n: ";
    cin >> n;

    double actualResult = 0;

    for (unsigned i = 1; i <= n; i++)
    {
        actualResult += pow(i, 3);
    }

	double expectedResult = 0.25 * pow(n, 2) * pow((n + 1), 2);

    actualResult == expectedResult
	? cout << "Valid"
	: cout << "Invalid";
}