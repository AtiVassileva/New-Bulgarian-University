#include <iostream>

using namespace std;

int main()
{
    const string InvalidInputMessage = "Invalid input!";

    int day, month;
    cout << "Day: ";
    cin >> day;

    if ((!cin) || (day < 1 || day > 31))
    {
        cout << InvalidInputMessage << endl;
        return 1;
    }

    cout << "Enter month: ";
    cin >> month;

    if ((!cin) || (month < 1 || month > 12))
    {
        cout << InvalidInputMessage << endl;
        return 2;
    }

    string sign;

    if((month == 1 && day >= 20 && day <= 31) || (month == 2 && day <= 18))
    {
        sign = "Aquarius";
    }
    else if((month == 2 && day >= 19 && day <= 28) || (month == 3 && day <= 20))
    {
        sign = "Pisces";
    }
    else if ((month == 3 && day >= 21 && day <= 31) || (month == 4 && day <= 19))
    {
        sign = "Aries";
    }
    else if ((month == 4 && day >= 20 && day <= 30) || (month == 5 && day <= 20))
    {
        sign = "Taurus";
    }
    else if ((month == 5 && day >= 21 && day <= 31) || (month == 6 && day <= 21))
    {
        sign = "Gemini";
    }
    else if ((month == 6 && day >= 22 && day <= 30) || (month == 7 && day <= 22))
    {
        sign = "Cancer";
    }
    else if ((month == 7 && day >= 23 && day <= 31) || (month == 8 && day <= 22))
    {
        sign = "Leo";
    }
    else if ((month == 8 && day >= 23 && day <= 31) || (month == 9 && day <= 22))
    {
        sign = "Virgo";
    }
    else if ((month == 9 && day >= 23 && day <= 30) || (month == 10 && day <= 22))
    {
        sign = "Libra";
    }
    else if ((month == 10 && day >= 23 && day <= 31) || (month == 11 && day <= 22))
    {
        sign = "Scorpio";
    }
    else if ((month == 11 && day >= 23 && day <= 30) || (month == 12 && day <= 21))
    {
        sign = "Sagittarius";
    }
    else if ((month == 12 && day >= 22 && day <= 31) || (month == 1 && day <= 19))
    {
        sign = "Capricorn";
    }
    else
    {
        cout << InvalidInputMessage;
        return 3;
    }

    cout << "Your zodiac sign is " << sign << ".";
}