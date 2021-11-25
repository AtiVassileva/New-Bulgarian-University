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

    if (k <= 0)
    {
        cout << "K should be a positive number!";
        return 2;
    }

    cout << "n: ";
    cin >> n;

    if (!cin)
    {
        cout << "Bad input!";
        return 3;
    }

    if (n <= 0)
    {
        cout << "N should be a positive number!";
        return 4;
    }

    double sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += pow(i - 2, 2) + k * i;
    }

    cout << "Sum: " << sum << endl;
}