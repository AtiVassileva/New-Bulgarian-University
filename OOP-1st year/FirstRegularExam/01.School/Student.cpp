#include "Student.h"

#include <iostream>

Student::Student(char* name, char* lastName, char* address, char* facultyNumber, int count, const int* grades) 
{
	Student::name = name;
	Student::lastName = lastName;
	Student::address = address;
	Student::facultyNumber = facultyNumber;
	Student::count = count;
	Student::grades = grades;
}

const char* Student::getFacultyNumber() const
{
	return facultyNumber;
}

void Student::setFacultyNumber(char* value)
{
	facultyNumber = value;
}

const int Student::getCount() const
{
	return count;
}

void Student::setCount(int value)
{
	count = value;
}

int* Student::getGrades() const
{
	return grades;
}

void Student::setGrades(int* value)
{
	grades = value;
}

double& operator()(Student& stud);

double operator()(const Student& stud) const
{
	auto sum = 0;
	auto gr = stud.getGrades();
	auto count = stud.getCount();

	for (int i = 0; i < count; i++)
	{
		sum += gr[i];
	}
	
	return static_cast<double>(sum) / count;
}
