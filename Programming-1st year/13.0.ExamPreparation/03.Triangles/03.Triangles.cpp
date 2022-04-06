#include <iostream>
#include <math.h>

using namespace std;

void enterTriangle(int**, int);
double calcArea(int*, int);
void printArr(int**, int);

int main()
{
    int n, row;
    cout << "n = ";
    cin >> n;

    int** arr = new int* [n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[3];
    }

    enterTriangle(arr, n);
    printArr(arr, n);

    double s1, maxS = -1;
    maxS = calcArea(arr[0], 3);

    for (int j = 1; j < n; j++)
    {
        s1 = calcArea(arr[j], 3);
        if (s1 > maxS)
        {
            maxS = s1;
            row = j;
        }
    }

    cout << row + 1 << ": " << arr[row][0] << " "
        << arr[row][1] << " " << arr[row][2] << endl;
    cout << "Area: " << maxS << endl;

    return 0;
}

void enterTriangle(int** triangles, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter triangle " << i + 1 << ":" << endl;
        for (int j = 0; j < 3; j++)
        {
            cin >> triangles[i][j];
        }
    }
}

double calcArea(int* edges, int n)
{
    double res, p;
    p = (edges[0] + edges[1] + edges[2]) / 2;

    res = sqrt(p * (p - edges[0]) * (p - edges[1]) * (p - edges[2]));

    return res;
}

void printArr(int** arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ": ";
        cout << arr[i][0] << " ";
        cout << arr[i][1] << " ";
        cout << arr[i][2] << "\n";
    }
}