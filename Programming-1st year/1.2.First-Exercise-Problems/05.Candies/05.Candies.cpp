#include <iostream>

using namespace std;

int main()
{
    int kilos;
	double price;

    cout << "Candy kilograms in stock: ";
    cin >> kilos;

    cout << "Price for kilograms in stock: ";
    cin >> price;

    int kilosToBuy;
    cout << "How many kilos do you want to buy? ";
    cin >> kilosToBuy;

    double pricePerKilo = price / kilos;
    double finalPrice = pricePerKilo * kilosToBuy;

    cout << "The price for 1 kilogram candies is "
	<< pricePerKilo << " BGN." << endl;
    cout << "It will cost you " << finalPrice << " BGN to buy "
        << kilosToBuy << "kilograms of candies." << endl;
}