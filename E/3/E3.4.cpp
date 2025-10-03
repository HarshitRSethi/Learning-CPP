// ****************************************************************************************************
// Finding total amount in dollars of all abbreveation used in US
// ****************************************************************************************************

#include <iostream>

using namespace std;

int main()
{
    int dollars = 1;
    int quarters = 1;
    int dimes = 1;
    int nickels = 1;
    int pennies = 1;
    float total = dollars + (0.75 * quarters) + (0.5 * dimes) + (0.25 * nickels) + (0.01 * pennies);
    cout << total << endl;
    return 0;
}