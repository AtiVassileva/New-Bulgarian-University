#include <iostream>

using namespace std;

void print(const string* array, const int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << array[i] << " ";
	}

	cout << endl;
}

auto addStudent(const string* students, const int length,
	const string& studentNumber)
{
	const int copyLength = length + 1;
	const auto arrayCopy = new string[copyLength];

	for (int i = 0; i < copyLength - 1; i++)
	{
		arrayCopy[i] = students[i];
	}

	arrayCopy[copyLength - 1] = studentNumber;

	return arrayCopy;
}

void deleteStudent(string* students, const int length, 
    const string& studentNumber)
{
    bool containsNumber = false;
    int i;

    for (i = 0; i < length; i++)
    {
        if (students[i] == studentNumber)
        {
            containsNumber = true;
            break;
        }
    }

    if (!containsNumber)
    {
        return;
    }

    if (i < length)
    {
        for (int j = i; j < length - 1; j++)
        {
            students[j] = students[j + 1];
        }
    }
}

void changeStudentNumber(string* students, const int length,
    const string& oldStudentNumber, const string& newStudentNumber)
{
    bool containsNumber = false;
    int i;

    for (i = 0; i < length; i++)
    {
        if (students[i] == oldStudentNumber)
        {
            containsNumber = true;
            break;
        }
    }

    if (!containsNumber)
    {
        return;
    }

    students[i] = newStudentNumber;
}

bool containsStudent(const string* students, const int length, 
    const string& studentNumber)
{
    for (int i = 0; i < length; i++)
    {
        if (students[i] == studentNumber)
        {
            return true;
        }
    }

    return false;
}

int main()
{
	// TESTS

	const auto studentNumbers = new string[5]{ "F111111", "F222222", "F333333", "F444444", "F555555" };

	const auto addResult = addStudent(studentNumbers, 5, "F666666");

	print(addResult, 6);
	// F111111, F222222, F333333, F444444, F555555, F666666

    deleteStudent(studentNumbers, 5, "F333333");
    print(studentNumbers, 4);
    // F111111, F222222, F444444, F555555

    changeStudentNumber(studentNumbers, 5, "F444444", "F777777");
    print(studentNumbers, 4);
    // F111111, F222222, F777777, F555555

	const auto truthyResult = containsStudent(studentNumbers, 5, "F111111");

    cout << truthyResult << endl; // 1

	const auto falsyResult = containsStudent(studentNumbers, 5, "F999999");

    cout << falsyResult << endl; // 0
}