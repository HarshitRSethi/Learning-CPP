// *************************************************************************
// Conversion of number of days into whole weeks
// Counting days left after completing whole weeks to the give days
// *************************************************************************

#include <iostream>

using namespace std;

int main()
{
    int days = 23;      // No. of days
    int weeks = 23 / 7; // No. of weeks
    cout << weeks << endl;
    int daysLeft = days - (weeks * 7); // No. of days left after whole weeks
    cout << daysLeft << endl;
    return 0;
}