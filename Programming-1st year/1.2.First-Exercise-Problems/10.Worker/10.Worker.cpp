#include <iostream>

using namespace std;

int main()
{
	/*
	  50 hours per week
	  ----------------------
	  1-40 hours -> 2.5 per hour
	  41-45 hours -> 1.5 * 2.5 per hour
	  46-50 hours -> 2 * 2.5 per hour	  
	 */

	double grossSalary = 40 * 2.5 + 5 * (1.5 * 2.5) + 5 * (2 * 2.5);
	double taxes = grossSalary * 0.29;
	double netSalary = grossSalary - taxes;

	cout.precision(5);

	cout << "Worker gross salary: " << grossSalary << " BGN." << endl;
	cout << "Worker taxes: " << taxes << " BGN." << endl;
	cout << "Worker net salary: " << netSalary << " BGN." << endl;
}