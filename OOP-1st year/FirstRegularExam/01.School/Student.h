#pragma once
#include <map>

#include "People.h"

using namespace std;

class Student : People
{
private:

	int count;
	char* facultyNumber;
	int* grades;

public:
	Student(char* name, char* lastName, char* address, char* facultyNumber, int count, const int* grades);

const char* getFacultyNumber() const;
void setFacultyNumber(char* value);

	int getCount() const;
void setCount(int value);

	int* getGrades() const;
void setGrades(int* grades);
};