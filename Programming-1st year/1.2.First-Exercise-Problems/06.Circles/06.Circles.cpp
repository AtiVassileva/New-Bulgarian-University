#include <iostream>

using namespace std;

int main()
{
    const double PI = 3.14;

    int firstCircleRadius, secondCircleRadius;

    cout << "First radius: ";
    cin >> firstCircleRadius;

    cout << "Second radius: ";
    cin >> secondCircleRadius;

    // S1 = π(R1)^2
    double s1 = pow(PI * firstCircleRadius, 2);

    // S2 = π(R2)^2
    double s2 = pow(PI * secondCircleRadius, 2);

    // S3 = S1 + S2
    double s3 = s1 + s2;

    cout << "Results: " << endl;

    cout << "S1 = " << s1 << " sq.m." << endl;
    cout << "S2 = " << s2 << " sq.m." << endl;
    cout << "S3 = " << s3 << " sq.m." << endl;
}