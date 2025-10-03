// ****************************************************************************************************
// Computing mean and standard deviation of four integer values given by user
// ****************************************************************************************************

#include <cmath>
#include <iostream>

using namespace std;

// Total number
const int N = 4;

int main()
{
    // Declaring variables
    int A, B, C, D;

    // Asking for their definition
    cout << "Write four integer values seperated by whitespace." << endl;
    cin >> A >> B >> C >> D;

    // Proccessing Data
    float mean = float(A + B + C + D) / float(N);                                                                                 // Getting mean
    float stdDeviation = sqrt((float)(pow(A - mean, 2) + pow(B - mean, 2) + pow(C - mean, 2) + pow(D - mean, 2)) / float(N - 1)); // Applying formula for std. Devia.

    // Outputing result
    cout << mean << endl
         << stdDeviation << endl;
    return 0;
}