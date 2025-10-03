// ********************************************************************************************************************************************
// A program which add score withing given range to scoreTotal and keep count of it
// ********************************************************************************************************************************************

#include <iostream>

const int X = 100;

using namespace std;

int main()
{
    cout << "Score: ";
    int score, scoreTotal = 0, scoreCounter = 0;
    cin >> score;
    if ((score >= 1) && (score <= X))
    {
        cout << "Yes it is in the given range" << endl;
        scoreTotal += score;
        scoreCounter++;
        cout << "Total Score: " << scoreTotal << endl
             << "Score Counter: " << scoreCounter << endl;
    }
    else
        cout << "No, it's not within the given range" << endl;

    return 0;
}