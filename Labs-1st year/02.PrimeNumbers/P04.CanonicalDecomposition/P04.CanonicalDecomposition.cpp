#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, t, p;

    cout << "n: ";
    cin >> n;

    t = n;
    p = static_cast<int>(sqrt(n));
    
    auto array = new int[p + 1]{ 0 };

    for (int i = 2; i <= sqrt(p); i++) 
    {
        if (array[i] == 0) 
        {
            for (int j = i * i; j <= p; j += i) 
            {
                array[j] = -1;
            }
        }
    }

    for (int i = 2; i <= p; i++) 
    {
        if (array[i] == 0) 
        {

            while (t % i == 0) 
            {
                array[i]++;
                t /= i;
            }
        }
    }

    cout << n << " = ";

    for (int i = 2; i <= p; i++) 
    {
        if (array[i] != 0 && array[i] != -1) 
        {
            cout << i << "^" << array[i] << "*";
        }
    }

    if (array != nullptr) 
    {
        delete[] array;
        array = nullptr;
    }

    cout << endl;
}
