// ********************************************************************************************************************************************
// A program that tells which date out of given two data comes before another
// ********************************************************************************************************************************************

#include <iostream>

using namespace std;

int main()
{
    // Ask for date in proper format
    int month1, month2, year1, year2, day1, day2;

    // Year 1
    cout << "Write the 1st date in DD/MM/YYYY format" << endl;
    cin >> day1;
    cin.ignore(1, '/');
    cin >> month1;
    cin.ignore(1, '/');
    cin >> year1;
    // Check data
    if ((day1 < 1) || (month1 < 1) || (year1 < 1))
    {
        cout << "Wrong date, not possible" << endl;
        return 1;
    }

    // Year 2
    cout << "Write the 2nd date in DD/MM/YYYY format" << endl;
    cin >> day2;
    cin.ignore(1, '/');
    cin >> month2;
    cin.ignore(1, '/');
    cin >> year2;
    // Check data
    if ((day2 < 1) || (month2 < 1) || (year2 < 1))
    {
        cout << "Wrong date, not possible" << endl;
        return 1;
    }

    // Compare year
    if (year2 > year1)
    {
        cout << day1 << '/' << month1 << '/' << year1 << " comes before " << day2 << '/' << month2 << '/' << year2 << endl;
        return 0;
    }
    else if (year1 > year2)
    {
        cout << day2 << '/' << month2 << '/' << year2 << " comes before " << day1 << '/' << month1 << '/' << year1 << endl;
        return 0;
    }
    // Comapare month
    if (month2 > month1)
    {
        cout << day1 << '/' << month1 << '/' << year1 << " comes before " << day2 << '/' << month2 << '/' << year2 << endl;
        return 0;
    }
    else if (month1 > month2)
    {
        cout << day2 << '/' << month2 << '/' << year2 << " comes before " << day1 << '/' << month1 << '/' << year1 << endl;
        return 0;
    }
    // Compare day
    if (day2 > day1)
    {
        cout << day1 << '/' << month1 << '/' << year1 << " comes before " << day2 << '/' << month2 << '/' << year2 << endl;
        return 0;
    }
    else if (day1 > day2)
    {
        cout << day2 << '/' << month2 << '/' << year2 << " comes before " << day1 << '/' << month1 << '/' << year1 << endl;
        return 0;
    }
    else
        cout << "Both are same dates" << endl;

    return 0;
}