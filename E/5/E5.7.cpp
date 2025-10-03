// ********************************************************************************************************************************************
// A program which test is score is int the range of 1 to x(>0)
// ********************************************************************************************************************************************

#include <iostream>

const int X = 100;

using namespace std;

int main()
{
    cout << "Score: ";
    int score;
    cin >> score;
    if ((score >= 1) && (score <= X))
        cout << "Yes it is in the given range" << endl;
    else
        cout << "No, it's not within the given range" << endl;

    return 0;
}