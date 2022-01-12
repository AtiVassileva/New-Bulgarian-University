#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << "c: ";
    cin >> c;

    int hcf = 1, flag = 0, count;

    for (count = 1; flag == 0; count++)
    {
        if (a % count == 0 && b % count == 0 && c % count == 0) 
        {
            hcf = count;
        }

        if (count > a && count > b && count > c)
        {
            flag = 1;
        }
    }

    cout << "Highest Common Factor: " << hcf;
}