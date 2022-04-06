#include <iostream>

using namespace std;

int main()
{
    // S = 2R^2.sin(A)·sin(B)·sin(C)
    double radius;
    double firstAngle, secondAngle, thirdAngle;

    cout << "Radius: ";
    cin >> radius;

    cout << "First angle: ";
    cin >> firstAngle;

	cout << "Second angle: ";
    cin >> secondAngle;

	cout << "Third angle: ";
    cin >> thirdAngle;

    const double area = 2 * (pow(radius, 2) * sin(firstAngle)
        * sin(secondAngle) * sin(thirdAngle));
    
    cout << "Area: " << area << " sq.sm";
}