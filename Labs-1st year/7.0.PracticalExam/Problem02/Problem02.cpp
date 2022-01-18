#include <iostream>

using namespace std;

bool isSubset(int*, int, int*, int);

int main()
{
	auto setA = new int[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	auto setB = new int[4]{ 2, 3, 5, 7 };
	auto setC = new int[2]{ 3, 5 };
	auto setD = new int[2]{ 1, 2 };
	auto setE = new int[1]{ 1 };

	cout << "A subset of B? - ";
	isSubset(setA, 10, setB, 4) == 1 
		? cout << "Yes" << endl 
		: cout << "No" << endl;

	cout << "A subset of C? - ";
	isSubset(setA, 10, setC, 2) == 1
		? cout << "Yes" << endl
		: cout << "No" << endl;

	cout << "A subset of D? - ";
	isSubset(setA, 10, setD, 2) == 1
		? cout << "Yes" << endl
		: cout << "No" << endl;

	cout << "A subset of E? - ";
	isSubset(setA, 10, setE, 1) == 1
		? cout << "Yes" << endl
		: cout << "No" << endl;

	cout << endl;

	cout << "B subset of A? - ";
	isSubset(setB, 4, setA, 10) == 1
		? cout << "Yes" << endl
		: cout << "No" << endl;

	cout << "B subset of C? - ";
	isSubset(setB, 4, setC, 2) == 1
		? cout << "Yes" << endl
		: cout << "No" << endl;

	cout << "B subset of D? - ";
	isSubset(setB, 4, setD, 2) == 1
		? cout << "Yes" << endl
		: cout << "No" << endl;

	cout << "B subset of E? - ";
	isSubset(setB, 4, setE, 1) == 1
		? cout << "Yes" << endl
		: cout << "No" << endl;

	cout << endl;

	cout << "C subset of A? - ";
	isSubset(setC, 2, setA, 10) == 1
		? cout << "Yes" << endl
		: cout << "No" << endl;

	cout << "C subset of B? - ";
	isSubset(setC, 2, setB, 4) == 1
		? cout << "Yes" << endl
		: cout << "No" << endl;

	cout << "C subset of D? - ";
	isSubset(setC, 2, setD, 2) == 1
		? cout << "Yes" << endl
		: cout << "No" << endl;

	cout << "C subset of E? - ";
	isSubset(setC, 2, setE, 1) == 1
		? cout << "Yes" << endl
		: cout << "No" << endl;

	cout << endl;

	cout << "D subset of A? - ";
	isSubset(setD, 2, setA, 10) == 1
		? cout << "Yes" << endl
		: cout << "No" << endl;

	cout << "D subset of B? - ";
	isSubset(setD, 2, setB, 4) == 1
		? cout << "Yes" << endl
		: cout << "No" << endl;

	cout << "D subset of C? - ";
	isSubset(setD, 2, setC, 2) == 1
		? cout << "Yes" << endl
		: cout << "No" << endl;

	cout << "D subset of E? - ";
	isSubset(setD, 2, setE, 1) == 1
		? cout << "Yes" << endl
		: cout << "No" << endl;

	cout << endl;
	cout << "E subset of A? - ";
	isSubset(setE, 1, setA, 10) == 1
		? cout << "Yes" << endl
		: cout << "No" << endl;

	cout << "E subset of B? - ";
	isSubset(setE, 1, setB, 4) == 1
		? cout << "Yes" << endl
		: cout << "No" << endl;

	cout << "E subset of C? - ";
	isSubset(setE, 1, setC, 2) == 1
		? cout << "Yes" << endl
		: cout << "No" << endl;

	cout << "E subset of D? - ";
	isSubset(setE, 1, setD, 2) == 1
		? cout << "Yes" << endl
		: cout << "No" << endl;
}

bool isSubset(int* firstSet, int firstSetSize, int* secondSet, int secondSetSize)
{
	int counter = 0;

	for (int i = 0; i < secondSetSize; i++)
	{
		for (int j = 0; j < firstSetSize; j++)
		{
			if (secondSet[i] == firstSet[j])
			{
				counter++;
			}
		}
	}

	return counter == firstSetSize;
}