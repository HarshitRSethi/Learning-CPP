// ********************************************************************************************************************************************
// A program that calculate the weight of the given user in the planet given by the user
// ********************************************************************************************************************************************

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Take inputs
    float weight;
    string planetName;
    cout << "Your weight(on earth): ";
    cin >> weight;
    cout << "Planet name(EX: Mercury): ";
    cin >> planetName;

    float result;
    // If statement and calculation of result for different planetNames
    if (planetName == "Mercury")
        result = weight * 0.4155;
    else if (planetName == "Venus")
        result = weight * 0.8975;
    else if (planetName == "Earth")
        result = weight * 1.0;
    else if (planetName == "Moon")
        result = weight * 0.166;
    else if (planetName == "Mercury")
        result = weight * 0.3507;
    else if (planetName == "Jupiter")
        result = weight * 2.5374;
    else if (planetName == "Saturn")
        result = weight * 1.0677;
    else if (planetName == "Uranus")
        result = weight * 0.8947;
    else if (planetName == "Neptune")
        result = weight * 1.1794;
    else if (planetName == "Pluto")
        result = weight * 0.0899;
    else
    {
        cout << "Not a valid planet name in our Solar System or you just didn't follow syntax" << endl;
        return 1;
    }

    // Print result
    cout << "Your weight in " << planetName << " is " << result << endl;
    return 0;
}