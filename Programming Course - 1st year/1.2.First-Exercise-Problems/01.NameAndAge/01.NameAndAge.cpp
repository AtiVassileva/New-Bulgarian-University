#include <iostream>

using namespace std;

int main()
{
    string firstName;
    cout << "Enter your first name: ";
    cin >> firstName;

	string lastName;
    cout << "Enter your last name: ";
    cin >> lastName;

    int age;
    cout << "Enter your age: ";
    cin >> age;

    cout << "Your name is " << firstName << " " << lastName << " " << "and you are " << age << " " << "years old.";
}