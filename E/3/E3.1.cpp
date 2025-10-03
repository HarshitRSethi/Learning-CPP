// *************************************************************************
// Converting hours, minutes and seconds into corresponding time in seconds.
// *************************************************************************
#include <iostream>

using namespace std;

int main()
{
    int hours = 2;    // No. of hours
    int minutes = 20; // No. of minutes
    int seconds = 12; // No. of seconds
    int time = (hours * 60 * 60) + (minutes * 60) + seconds;
    cout << time << endl;
    return 0;
}