#include <iostream>

using namespace std;

int main()
{
	double temperatureInCelsius;
    cout << "Enter temperature in Celsius: ";
    cin >> temperatureInCelsius;

    // T(f) = (T(c) × 9/5) + 32
    double celsiusToFahrenheit = (temperatureInCelsius * 9 / 5) + 32;

    cout << temperatureInCelsius << " C = "
	<< celsiusToFahrenheit << " F" << endl;
}