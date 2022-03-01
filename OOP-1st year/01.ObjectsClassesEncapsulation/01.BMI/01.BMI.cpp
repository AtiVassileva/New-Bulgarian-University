#include <iostream>
#include "Person.h";

using namespace std;

int main()
{
    // Problem 01. - Test
    Person person("Test person", 175, 60);

    cout << person.getName() << endl;
    cout << person.getHeight() << endl;
    cout << person.getWeight() << endl;
    cout << person.calculateBMI() << endl;

    person.printInfo();

    // Problem 02. - Test
    cout << person.makeAssumption() << endl;

    // Problem 03 - Test
    Person first("Mike", 180, 80);
    Person second("Amy", 160, 45);

    cout << Person::callIndex(first, second) << endl;
}