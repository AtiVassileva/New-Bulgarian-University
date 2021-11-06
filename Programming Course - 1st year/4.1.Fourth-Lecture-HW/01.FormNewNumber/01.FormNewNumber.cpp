#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long nCopy = n;
    int length = 0;
    int digits[1000];
    while (nCopy != 0)
    {
        digits[length] = nCopy % 10;
        nCopy /= 10;
        length++;
    }
    for (int i = length - 1; i >= 1; i -= 2)
    {
        cout << digits[i - 1];
        cout << digits[i];
    }
    if (length % 2 == 1)
    {
        cout << digits[0];
    }
    cout << endl;
}
