#include "Person.h"

Person::Person(const char* name, int height, int weight)
{
	Person::name = name;
	Person::height = height;
	Person::weight = weight;
}

const char* Person::getName() const { return name; }

int Person::getHeight() const { return height; }
void Person::setHeight(int value) { height = value; }

int Person::getWeight() const { return weight; }
void Person::setWeight(int value) { weight = value; }

double Person::calculateBMI() const
{
	double t = 0.01 * height;

	return weight / t;
}

void Person::printInfo() const
{
	cout << "Name: " << name << endl;
	cout << "Height: " << height << endl;
	cout << "Weight: " << weight << endl;
	cout << "BMI: " << calculateBMI() << endl;
}