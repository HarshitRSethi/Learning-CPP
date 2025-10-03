// ****************************************************************************************************
// Computing mean and standard deviation of four integer values
// ****************************************************************************************************

#include <cmath>
#include <iostream>

using namespace std;

// Declaring different number
const int A = 3;
const int B = 6;
const int C = 4;
const int D = 9;
// Total number
const int N = 4;

int main()
{
    float mean = float(A + B + C + D) / float(N); // Getting mean
    float stdDeviation = sqrt((float)(pow(A - mean, 2) + pow(B - mean, 2) + pow(C - mean, 2) + pow(D - mean, 2)) / float(N - 1));
    cout << mean << endl // Applying formula for std. Devia.
         << stdDeviation << endl;
    return 0;
}