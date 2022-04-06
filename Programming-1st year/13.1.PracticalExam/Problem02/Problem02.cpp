#include <iostream>

using namespace std;

#define OUT

void mean(double x, double y, OUT double& aMean, OUT double& gMean)
{
	aMean = (x + y) / 2;
	gMean = sqrt(x * y);
}

int main()
{
	double a, b, c, d;

	cout << "a: ";
	cin >> a;

	cout << "b: ";
	cin >> b;

	cout << "c: ";
	cin >> c;

	cout << "d: ";
	cin >> d;

	double abAMean, acAMean, adAMean;
	double abGMean, acGMean, adGMean;

	mean(a, b, abAMean, abGMean);

	cout << "A & B -> A Mean = " << abAMean << "; G-Mean = " << abGMean << endl;

	mean(a, c, acAMean, acGMean);

	cout << "A & C -> A Mean = " << acAMean << "; G-Mean = " << acGMean << endl;

	mean(a, d, adAMean, adGMean);

	cout << "A & D -> A Mean = " << adAMean << "; G-Mean = " << adGMean << endl;
}