#include <iostream>

using namespace std;

int main()
{
    int n = 0;

    cout << "n: ";
    cin >> n;

    if (!cin)
    {
        cout << "Bad input!";
        return 1;
    }

    if (n <= 0)
    {
        cout << "N should be a positive number!";
        return 2;
    }

    auto array = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int positiveSum = 0;
    int negativeSum = 0;

    for (int i = 0; i < n; i++)
    {
        array[i] < 0
            ? negativeSum += array[i]
            : positiveSum += array[i];
    }

    cout << "Positive elements sum: " << positiveSum << endl;
    cout << "Negative elements sum: " << negativeSum << endl;
}