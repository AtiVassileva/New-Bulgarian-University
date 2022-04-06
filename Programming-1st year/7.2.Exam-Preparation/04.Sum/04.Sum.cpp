#include <iostream>

using namespace std;

int main()
{
    int k, n;

    cout << "k: ";
    cin >> k;

    if (!cin)
    {
        cout << "Bad input!";
        return 1;
    }

    cout << "n: ";
    cin >> n;

    if (!cin)
    {
        cout << "Bad input!";
        return 3;
    }

    double sum = 0;

    for (int i = 1; i <= n; i++)
    {
        double currentSum = pow(i - 2, 2) + k * i;

        cout << "Current sum: " << currentSum << endl;
        sum += currentSum;
    }

    cout << "Total sum: " << sum << endl;
}