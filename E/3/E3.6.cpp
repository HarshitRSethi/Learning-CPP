// ****************************************************************************************************
// Implementing maths formulas
// ****************************************************************************************************

#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x = 7;
    int y = 2;
    int z = 3;
    int p = 4;
    int q = 5;
    int r = 6;

    // 3X + Y
    float sum = 3 * x + y;
    cout << fixed << setprecision(0) << sum << endl;

    // X2 + 2Y + Z
    sum = pow(x, 2) + 2 * y + z;
    cout << sum << endl;

    //(x + y)/(z -p) * q/r
    sum = float(x + y) / float(z - p) * float(q) / float(r);
    cout << setprecision(2) << sum << endl;

    // ((X2 + 2Y + Z)/P)/Q * R
    sum = (float((pow(x, 2) + 2 * y + z)) / float(p)) / (float(q) * float(r));
    cout << sum << endl;

    // sqrt(mod(x - y))
    sum = sqrt(fabs(float(x - y)));
    cout << sum << endl;

    // X to power -cos(y)
    sum = pow(x, -cos(y));
    cout << sum << endl;
    return 0;
}