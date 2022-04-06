#include <iostream>

using namespace std;

int main()
{
    const string InvalidInputMessage = "Invalid input!";

    int points;
    cout << "Your points: ";
    cin >> points;

    if (!cin || points < 0 || points > 100)
    {
        cout << InvalidInputMessage << endl;
        return 1;
    }

    string grade;

    if (points >= 0 && points <= 60)
    {
        grade = "Poor 2";
    }
    else if (points >= 61 && points <= 70)
    {
        grade = "Average 3";
    }
    else if (points >= 71 && points <= 80)
    {
        grade = "Good 4";
    }
    else if (points >= 81 && points <= 90)
    {
        grade = "Very good 5";
    }
    else if (points >= 91)
    {
        grade = "Excellent 6";
    }

    cout << "Your grade is " << grade << endl;
}