#include <iostream>

using namespace std;

int main()
{
    const double PI = 3.14;

    int degrees, radians;
    cout << "Enter degrees: ";
    cin >> degrees;
    
    cout << "Enter radians: ";
    cin >> radians;

    //rad = pi*deg/180,
    double degreesToRadians = PI * degrees / 180;

    // deg = rad*180/pi
    double radiansToDegrees = radians * 180 / PI;

    cout << "Results:" << endl;

    cout << degrees << " degrees = " << degreesToRadians
	<< " radians." << endl;

    cout << radians << " radians = " << radiansToDegrees
        << " degrees." << endl;
}