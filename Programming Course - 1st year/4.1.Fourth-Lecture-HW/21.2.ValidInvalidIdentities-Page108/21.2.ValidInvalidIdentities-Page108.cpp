#include <iostream>

using namespace std;

int main()
{
    unsigned n;
    cout << "n: ";
    cin >> n;

    double actualResult = 0;

    for (unsigned i = 1; i <= 2 * n - 1; i+= 2)
    {
        actualResult += pow(i, 2);
    }

    double expectedResult = (n / 3) * (4 * pow(n , 2) - 1);

    actualResult == expectedResult
        ? cout << "Valid"
        : cout << "Invalid";
}