// ****************************************************************************************************
//  A program that ask user for three floating number and output their average for not so familiar with
//  computers
// ****************************************************************************************************

#include <iostream>

using namespace std;

int main()
{
    cout << "Write first number" << endl;
    float i;
    cin >> i;
    cout << "Write secound number" << endl;
    float j;
    cin >> j;
    cout << "Write third number" << endl;
    float k;
    cin >> k;
    float avg = (i + j + k) / 3;
    cout << "Average of the given three numbers is " << avg << endl;
    return 0;
}