// ********************************************************************************************************************************************
// Program that reads a day number of year from user and then write in which month it appear assuming the year to not be a leap year
// ********************************************************************************************************************************************

#include <iostream>

using namespace std;

int main()
{
    // Take input
    int dayNumb;
    cout << "The day number of whom you want to know month[must be between 1 to 365]: ";
    cin >> dayNumb;

    // Write if else statement and output result
    if (dayNumb > 0)
    {
        if ((dayNumb < 32)) // january had 31 days < 32, now have to add no. of days in each month for proper result
            cout << "January";
        else if (dayNumb < 60)
            cout << "Feburary";
        else if (dayNumb < 91)
            cout << "March";
        else if (dayNumb < 121)
            cout << "April";
        else if (dayNumb < 152)
            cout << "May";
        else if (dayNumb < 182)
            cout << "June";
        else if (dayNumb < 213)
            cout << "July";
        else if (dayNumb < 244)
            cout << "August";
        else if (dayNumb < 274)
            cout << "September";
        else if (dayNumb < 305)
            cout << "October";
        else if (dayNumb < 335)
            cout << "November";
        else if (dayNumb < 366)
            cout << "December";
        else
            cout << "Entered number is not withing range[less then 366], please try again with different value";
    }
    else
        cout << "Day number has to be positive";
    cout << endl;
    return 0;
}