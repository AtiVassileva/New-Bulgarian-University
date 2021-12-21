#include <iostream>

using namespace std;

void printArray(const int* array, const int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;
}

void deleteElement(int array[], const int length, const int number)
{
    bool containsNumber = false;
    int i;

    for (i = 0; i < length; i++)
    {
        if (array[i] == number)
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
            array[j] = array[j + 1];
        }
    }
}

auto insertAtTheEnd(const int* array, const int length, int number)
{
	const int copyLength = length + 1;
	const auto arrayCopy = new int[copyLength];

    for (int i = 0; i < copyLength - 1; i++)
    {
        arrayCopy[i] = array[i];
    }

    arrayCopy[copyLength - 1] = number;

    return arrayCopy;
}

auto insertAtIndex(const int* array, const int length, 
    const int number, const int index)
{
    const int copyLength = length + 1;
    const auto arrayCopy = new int[copyLength];

    for (int i = 0; i < copyLength; i++)
    {
	    if (i == index)
	    {
            arrayCopy[i] = number;

            for (int j = i; j < length; j++)
            {
                arrayCopy[j + 1] = array[j];
            }

            break;
	    }

	    arrayCopy[i] = array[i];
    }

    return arrayCopy;
}

void changeValue (int* array, const int length, 
    const int oldValue, const int newValue)
{
    bool containsNumber = false;
    int i;

    for (i = 0; i < length; i++)
    {
        if (array[i] == oldValue)
        {
            containsNumber = true;
            break;
        }
    }

    if (!containsNumber)
    {
        return;
    }

    array[i] = newValue;
}

int main()
{
    // TESTS

    const auto deleteArray = new int[5]{ 5, 6, 7, 8, 9 };
    constexpr unsigned deleteArrayLength = 5;
    deleteElement(deleteArray, deleteArrayLength, 7); 

    printArray(deleteArray, deleteArrayLength - 1);
	// 5, 6, 8, 9

    const auto insertAtEndArray = new int[3]{ 17, 18, 19 };
    constexpr unsigned insertAtEndArrayLength = 3;
    const auto insertAtEndResult = insertAtTheEnd(insertAtEndArray, insertAtEndArrayLength, 20);
    
    printArray(insertAtEndResult, insertAtEndArrayLength + 1);
	// 17, 18, 19, 20

    const auto insertArray = new int[4]{ 22, 16, 78, 92 };
    constexpr unsigned insertArrayLength = 4;
    const auto insertResult = insertAtIndex(insertArray, insertArrayLength, 50, 3);

    printArray(insertResult, insertArrayLength + 1);
	// 22, 16, 78, 50, 92

    const auto changeValueArray = new int[6]{ 9, 3, 2, 8, 7, 5 };
    constexpr unsigned changeValueArrayLength = 6;
    changeValue(changeValueArray, changeValueArrayLength, 8, 99);

    printArray(changeValueArray, changeValueArrayLength);
    // 9, 3, 2, 99, 7, 5

    delete[] deleteArray;
    delete[] insertAtEndArray;
    delete[] insertArray;
    delete[] changeValueArray;
}