#include "Person.h"
#include <float.h>

Person::Person()
{
}

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
	const double heightInMeters = 0.01 * height;
	return weight / heightInMeters;
}

void Person::printInfo() const
{
	cout << "Name: " << name << endl;
	cout << "Height: " << height << endl;
	cout << "Weight: " << weight << endl;
	cout << "BMI: " << calculateBMI() << endl;
	cout << "BMI Assumption: " << makeAssumption() << endl;
}

string Person::makeAssumption() const
{
	const double bmi = calculateBMI();
	string result;

	if (bmi < 16)
	{
		result = "severely underweight";
	}
	else if (bmi >= 16 && bmi <= 18.49)
	{
		result = "underweight";
	}
	else if (bmi >= 18.5 && bmi <= 24.99)
	{
		result = "normal";
	}
	else if (bmi >= 25 && bmi <= 29.99)
	{
		result = "overweight";
	}
	else if (bmi >= 30 && bmi <= 34.99)
	{
		result = "obese class I";
	}
	else if (bmi >= 35 && bmi <= 39.99)
	{
		result = "obese class II";
	}
	else if (bmi >= 40)
	{
		result = "obese class III";
	}

	return result;
}

double Person::callIndex(const Person& first, const Person& second)
{
	return pow(first.height - second.height, 2) + (first.calculateBMI() - second.calculateBMI());
}

Person* Person::findFittestCouple(Person people[10])
{
	double fittestResult = DBL_MAX;
	Person fittestCouple[2];

	for (int i = 0; i < 9; i++)
	{
		Person first = people[i];
		Person second = people[i + 1];

		const double currentResult = Person::callIndex(first, second);

		if (currentResult < fittestResult)
		{
			fittestResult = currentResult;
			fittestCouple[0] = first;
			fittestCouple[1] = second;
		}
	}

	return fittestCouple;
}