// ********************************************************************************************************************************************
// A program that takes square root variable only when it is not negative
// ********************************************************************************************************************************************

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Take input
    int a;
    cout << "Write the number: ";
    cin >> a;

    // Check for sign, (>0) and act accordingly
    float root;
    if (a > 0)
        root = sqrt(a);
    else
        root = sqrt(fabs(a));

    // print result
    cout << "Square root: " << root << endl;
    return 0;
}