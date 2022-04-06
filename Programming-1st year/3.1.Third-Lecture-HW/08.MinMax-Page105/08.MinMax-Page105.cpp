#include <iostream>

using namespace std;

int main()
{
    const string firstExpression = "min{ a + b + c, a*b*c } + 1.5";
        const string secondExpression = "m‡ı{ a^2 - b^3 + c, a - 4.5b, 1.5a + 3.5b - 8c } - 7.5";

    double a, b, c;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << "c: ";
    cin >> c;

    double firstExpressionResult = min(a + b + c, a * b * c);
    double secondExpressionMidResult = max(pow(a, 2) - pow(b, 3) + c, a - 4.5 * b);
    double secondExpressionFinalResult = max(secondExpressionMidResult, 1.5 * a + 3.5 * b + 8 * c) - 7.5;

    cout << firstExpression << " = " << firstExpressionResult << endl;
    cout << secondExpression << " = " << secondExpressionFinalResult << endl;
}