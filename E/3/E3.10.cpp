// ****************************************************************************************************
//  Printing distance
// ****************************************************************************************************

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double distance = 22000;
    cout << fixed << setprecision(5) << setw(15) << distance << endl;

    return 0;
}