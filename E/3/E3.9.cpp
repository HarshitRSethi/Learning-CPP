// ****************************************************************************************************
// Printing money
// ****************************************************************************************************

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float money = 1419;
    cout << fixed << setprecision(2) << "$" << setw(8) << money << endl;

    return 0;
}