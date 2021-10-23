#include <iostream>

using namespace std;

int main()
{
    double firstMixtureWeight = 600;
    double firstMixtureIntensity = 0.56;

    double secondMixtureWeight = 800;
    double secondMixtureIntensity = 0.35;

    double fullIntensityWeight = (firstMixtureIntensity * firstMixtureWeight) + (secondMixtureIntensity * secondMixtureWeight);

    double mixWeight = 1400;
    double mixIntensity = fullIntensityWeight / mixWeight;

    cout << "Mix intensity: " << mixIntensity * 100 << "%";
}