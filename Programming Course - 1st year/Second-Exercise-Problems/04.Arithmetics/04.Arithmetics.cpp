#include <iostream>

using namespace std;

int main()
{
    // 0,5.(41-17/3)-19,5
    double firstResult = 0.5 * (41 - (17 / 3)) - 19.5;
    cout << "0,5.(41-17/3)-19,5 = " << firstResult << endl;

    //2.(-4).6.(-8).10.(-12).14
    double secondResult = 2 * -4 * 6 * -8 * 10 * -12 * 14;
    cout << "2.(-4).6.(-8).10.(-12).14 = " << secondResult << endl;

    // (4/7+7/23)/(5/8-16/19)
     double thirdResult = (4.00 / 7.00 + 7.00 / 23)
	/ (5.00 / 8- 16.00 / 19);
    cout << "(4/7+7/23)/(5/8-16/19) = " << thirdResult << endl;
}
