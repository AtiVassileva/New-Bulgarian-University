#include <iostream>

using namespace std;

int main()
{
    unsigned n, m;

    cout << "n: ";
    cin >> n;

    if (n < 1)
    {
        cout << "n should be greater or equal to 1." << endl;
        cout << "n: ";
        cin >> n;
    }

    cout << "m: ";
    cin >> m;

    if (m < 2)
    {
        cout << "m should be greater or equal to 2." << endl;
        cout << "m: ";
        cin >> m;
    }

    unsigned totalCount = 0;

    for (unsigned i = 1; i <= n; i++)
    {
	    const unsigned currentResult = pow(i, 3) + 
            7 * pow(i, 2) + pow(n, 3);

        if (currentResult % m == 0)
        {
            cout << currentResult << endl;
            totalCount++;
        }
    }

    cout << "Total count: " << totalCount << endl;

}