#pragma once
#include <iostream>

using namespace std;

class Person
{
private:
	const char *name;
	int height;
	int weight;

public:
	Person(const char* name, int height, int weight);

	const char* getName() const;

	int getHeight() const;
	void setHeight(int value);

	int getWeight() const;
	void setWeight(int value);

	double calculateBMI() const;
	void printInfo() const;
};