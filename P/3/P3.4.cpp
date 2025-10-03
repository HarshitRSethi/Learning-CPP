// ****************************************************************************************************
// Creating a program that give no. of combination of n items taken r at a time
// ****************************************************************************************************

#include <iostream>

using namespace std;

const int n = 18;
const int r = 3;

int main()
{
    double nFac = double(18 * 17 * 16) * double(15 * 14 * 13 * 12 * 11 * 10) * 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2; // calculating n!
    double rFac = 3 * 2;                                                                                      // computing r!
    double n_rFac = double(15 * 14 * 13 * 12 * 11 * 10) * 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2;                      // computing n-r!
    double permutation = nFac / (rFac * n_rFac);                                                              // Applying formula to calculate combinations
    cout << permutation << endl;                                                                              // Printing result
    return 0;
}