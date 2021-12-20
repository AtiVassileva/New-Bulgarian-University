#include <iostream>

using namespace std;

void printArray(const int* array)
{
    constexpr unsigned length = sizeof(array);

    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;
}

void deleteElement(int arr[], const int length, const int number)
{
    bool containsNumber = false;
    int i;

    for (i = 0; i < length; i++)
    {
        if (arr[i] == number)
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
            arr[j] = arr[j + 1];
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
   // array = arrayCopy;
}

int main()
{
    const auto deleteArray = new int[5]{ 5, 6, 7, 8, 9 };
    deleteElement(deleteArray, sizeof(deleteArray), 5); 

    printArray(deleteArray); // 1, 2, 3, 4

    const auto insertArray = new int[3]{ 17, 18, 19 };
    auto result = insertAtTheEnd(insertArray, 3, 20);
    
    printArray(result);
}
