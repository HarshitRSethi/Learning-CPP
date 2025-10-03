// *************************************************************************
// Converting dollars, quarters, dimes and nickels into number of pennies
// *************************************************************************

#include <iostream>

using namespace std;

int main()
{
    int dollars = 1;
    int quarters = 1;
    int dimes = 1;
    int nickels = 1;
    int pennies = 1;
    int totalPennies = (dollars * 100) + (quarters * 75) +
                       (dimes * 50) + (nickels * 25) + pennies;
    cout << totalPennies << endl;

    return 0;
}