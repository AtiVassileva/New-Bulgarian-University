#include <iostream>
#include "Person.h"

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

    // Problem 03. - Test
    Person first("Mike", 180, 80);
    Person second("Amy", 160, 45);

    cout << Person::callIndex(first, second) << endl;

    // Problem 04. - Fittest Couple
    auto people = new Person[10]
    {
        Person("Test Person 1", 180, 80),
        Person("Test Person 2", 156, 58),
        Person("Test Person 3", 114, 34),
        Person("Test Person 4", 195, 99),
        Person("Test Person 5", 203, 106),
        Person("Test Person 6", 167, 80),
        Person("Test Person 9", 165, 43),
        Person("Test Person 10", 171, 71),
        Person("Test Person 7", 143, 41),
        Person("Test Person 8", 159, 67),
    };

    const auto fittestCouple = Person::findFittestCouple(people);

    cout << "Fittest couple: " << fittestCouple[0].getName()
        << " & " << fittestCouple[1].getName() << endl;
}