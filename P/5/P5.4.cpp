// ********************************************************************************************************************************************
// A program that reads the first day of the year as input and a day  no. that you wanted to know day for, in both, leap year and without it
// ********************************************************************************************************************************************

#include <iostream>

using namespace std;

int main()
{
    int startDay, dayNumb, resultingDay;
    cout << "Starting day of year(0 for sunday and so on): ";
    cin >> startDay;
    if ((startDay >= 0) && (startDay <= 6))
    {
        cout << "The day number you wanted to know day of: ";
        cin >> dayNumb;
        if ((dayNumb >= 0) && (dayNumb <= 366))
        {
            resultingDay = (startDay + dayNumb - 1) % 7;
            if (resultingDay == 0)
                cout << "Sunday" << endl;
            else if (resultingDay == 1)
                cout << "Monday" << endl;
            else if (resultingDay == 2)
                cout << "Tuesday" << endl;
            else if (resultingDay == 3)
                cout << "Wednesday" << endl;
            else if (resultingDay == 4)
                cout << "Thursday" << endl;
            else if (resultingDay == 5)
                cout << "Friday" << endl;
            else
                cout << "Saturday" << endl;
        }
        else
            cout << "The day number is not within the range [1 - 366], try again with different value" << endl;
    }
    else
        cout << "The day you have entered is not withing range[0 - 6], try again with different value" << endl;
    return 0;
}