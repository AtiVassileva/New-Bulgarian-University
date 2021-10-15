#include <iostream>

using namespace std;

int main()
{
    double chocolateKilos, cakeKilos;
    double chocolatePrice, cakePrice;

    cout << "Chocolate kilograms: ";
    cin >> chocolateKilos;

    cout << "Cake kilograms: ";
    cin >> cakeKilos;

    cout << "Chocolate price: ";
    cin >> chocolatePrice;

    cout << "Cake price: ";
    cin >> cakePrice;

    double chocolatePricePerKg = chocolatePrice / chocolateKilos;
    double cakePricePerKg = cakePrice / cakeKilos;
    int priceDifference = cakePricePerKg / chocolatePricePerKg;

    cout.precision(3);

    cout << "Chocolate costs " << chocolatePricePerKg
	<< " BGN per kilogram." << endl;

	cout << "Cake costs " << cakePricePerKg
	<< " BGN per kilogram." << endl;

    cout << "Cake is " << priceDifference
	<< " times more expensive than chocolate." << endl;
}