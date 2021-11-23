#include <iostream>

using namespace std;

int main()
{
    int n, p, x;
    unsigned int k = 0;
    cout << "n: ";
    cin >> n;

    cout << "p: ";
    cin >> p;

    x = n;

    while (x % p == 0) 
    {
        k++;
        x /= p;
    }

    cout << n << " = " << p << "^" << k << " * " << x << endl;
}