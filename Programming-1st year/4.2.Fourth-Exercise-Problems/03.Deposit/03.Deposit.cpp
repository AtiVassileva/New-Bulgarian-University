#include <iostream>

using namespace std;

int main()
{
    double percent;
    cout << "Percent: ";
    cin >> percent;

    if (percent < 1 || percent > 25)
    {
        cout << "Percent should be between 1% and 25%" << endl;

        cout << "Try again: ";
        cin >> percent;
    }

    double deposit = 1000;
    const double desiredSum = 1100;

    unsigned monthsCount = 0;

    while (true)
    {
	    if (deposit > desiredSum)
	    {
            break;
	    }

        deposit += deposit * (percent / 100);
        monthsCount++;
    }

    cout << "Months count: " << monthsCount << endl;
    cout << "Total sum: " << deposit << endl;
}