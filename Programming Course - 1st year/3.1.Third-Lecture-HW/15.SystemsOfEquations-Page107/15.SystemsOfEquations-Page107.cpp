#include <iostream>

using namespace std;

int main()
{
    double a1, a2, b1, b2, c1, c2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

    double y = c2 / ((a2 * ((c1 - b1) / a1)) + b2);
    double x = (c1 - (b1 * y)) / a1;

    cout << "x = " << x << " y = " << y;
}
