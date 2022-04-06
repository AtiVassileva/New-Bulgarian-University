#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i <= 360; i++)
    {
	    if (sin(i) >= 0 && sin(i) <= 1 
			&& cos(i) >= 0 && cos(i) <= 1)
	    {
			cout << i << " C - sin: " << sin(i) << " & cos: " << cos(i) << " C" << endl;
	    }
    }
}