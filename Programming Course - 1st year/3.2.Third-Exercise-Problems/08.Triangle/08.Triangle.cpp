#include <iostream>

using namespace std;

int main()
{
    int firstSide, secondSide, thirdSide;

    cout << "First side: ";
    cin >> firstSide;

    cout << "Second side: ";
    cin >> secondSide;

    cout << "Third side: ";
    cin >> thirdSide;

    if (firstSide + secondSide < thirdSide ||
        secondSide + thirdSide < firstSide || 
        firstSide + thirdSide < secondSide)
    {
        cout << "0 - Impossible to form a triangle.";
    }
    else
    {
	    if (firstSide == secondSide && 
            secondSide == thirdSide)
	    {
            cout << "3 - Equilateral Triangle";
	    }
        else if(firstSide == secondSide || 
            secondSide == thirdSide ||
            firstSide == thirdSide)
        {
            cout << "2 - Isosceles Triangle";
        }
        else
        {
            cout << "1 - Scalene Triangle";
        }
    }
}