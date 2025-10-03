// ****************************************************************************************************
// Celsius program
// This program outputs the Celsius temperature
// corresponding to a given Fahrenheit temprature
// ****************************************************************************************************

#include <iostream>

using namespace std;

int main()
{
    const float fahrenheit = 72.0;
    float celsius = (fahrenheit - 32) * (float(5) / float(9));
    cout << celsius << endl;

    return 0;
}