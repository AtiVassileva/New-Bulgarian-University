#include <iostream>

using namespace std;

int main()
{
    double first, second, third;
    cout << "First number: ";
    cin >> first;

    cout << "Second number: ";
    cin >> second;

    cout << "Third number: ";
    cin >> third;

    double smallest, medium, biggest;

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
    else if(second > first && second > third)
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

    cout << "Numbers ordered by ascending: " << smallest << ", " << medium << ", " << biggest;
}