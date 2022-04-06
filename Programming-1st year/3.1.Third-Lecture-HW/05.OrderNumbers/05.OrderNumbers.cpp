#include <iostream>

using namespace std;

int main()
{
    int first, second, third;

    cout << "First number: ";
    cin >> first;

    cout << "Second number: ";
    cin >> second;

    cout << "Third number: ";
    cin >> third;

    int smallest, medium, biggest;

    if (first > second && first > third)
    {
        biggest = first;

        if (second > third)
        {
            medium = second;
            smallest = third;
        }
        else
        {
            medium = third;
            smallest = second;
        }
    }
    else if (second > first && second > third)
    {
        biggest = second;

        if (first > third)
        {
            medium = first;
            smallest = third;
        }
        else
        {
            medium = third;
            smallest = first;
        }
    }
    else
    {
        biggest = third;

        if (first > second)
        {
            medium = first;
            smallest = second;
        }
        else
        {
            medium = second;
            smallest = first;
        }
    }

    cout << "Numbers ordered by descending: " << biggest << ", " << medium << ", " << smallest;
}