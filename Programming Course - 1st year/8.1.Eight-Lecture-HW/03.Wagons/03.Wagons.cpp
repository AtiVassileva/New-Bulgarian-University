#include <iostream>
#include <map>

using namespace std;

void printWagons(int startWagon, int destinationWagon)
{
	for (int wagon = startWagon; wagon <= destinationWagon; wagon++)
	{
		if (wagon != 2 && wagon != 6 && wagon != 12)
		{
			cout << wagon  << " ";
		}
	}
}

int main()
{
    // LBOPKRKSKPMRKKPP
    int startWagon, destinationWagon;

    cout << "Start wagon: ";
    cin >> startWagon;

    cout << "Destination wagon: ";
    cin >> destinationWagon;

    if (startWagon < 1 || destinationWagon > 16)
    {
		cout << "Invalid wagons!" << endl;
		return 1;
    }

	cout << "To get from " << startWagon << " wagon to " << destinationWagon << " wagon you have to cross: " << endl;

    printWagons(startWagon, destinationWagon);
}
