// ********************************************************************************************************************************************
// A program that finds the surface area of given percentage of moon that appear aluuminated
// ********************************************************************************************************************************************

#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Take percentage as input
    float perCent;
    cout << "The percentage of moon's surface area that you want to calculate area for: ";
    cin >> perCent;

    // Calculate theta and define R
    float theta = M_PI * (perCent / 100);
    float R = 1738.3;

    // Apply formula
    double surfaceArea = 2 * double(R * R) * theta;

    // Output the result
    cout << fixed << setprecision(3) << "Surface Area of " << perCent << "% of moon's visible surface is " << surfaceArea << endl;
    // Close program
    return 0;
}