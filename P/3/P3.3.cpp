// ****************************************************************************************************
// Finding factorial of 15 throught 2 methods, one exact other approximate
// Printing the result of two and their difference
// ****************************************************************************************************

#include <iostream>
#include <cmath>

using namespace std;

const int A = 15;

int main()
{
    double fac = double(15 * 14 * 13 * 12 * 11 * 10) * 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2; // The accurate factorial calculation
    double stirlingFac = exp(-A) * pow(A, A) * sqrt(2 * M_PI * A);                    // Approximate, Stirling's formula
    cout << fixed << fac << endl
         << stirlingFac << endl
         << fac - stirlingFac << endl;
    return 0;
}