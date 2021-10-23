#include <iostream>

using namespace std;

double calculateDistance(int x1, int x2, int y1, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main()
{
    int x, y;

    cout << "X: ";
    cin >> x;

    cout << "Y: ";
    cin >> y;

    cout << "Distance from point(0, 0): " << calculateDistance(x, 0, y, 0) << endl;

    cout << "Distance from point(1, 0): " << calculateDistance(x, 1, y, 0) << endl;

    cout << "Distance from point(0, 1): " << calculateDistance(x, 0, y, 1) << endl;

    cout << "Distance from point(1, 1): " << calculateDistance(x, 1, y, 1) << endl;

    cout << "---------------------------" << endl;

    cout << "Distance from point(1, 1): " << calculateDistance(x, 1, y, 1) << endl;

    cout << "Distance from point(-1, 1): " << calculateDistance(x, -1, y, 1) << endl;

    cout << "Distance from point(-1, -1): " << calculateDistance(x, -1, y, -1) << endl;

    cout << "Distance from point(-1, 1): " << calculateDistance(x, -1, y, 1) << endl;
}