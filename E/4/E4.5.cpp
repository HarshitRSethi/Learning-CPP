// ****************************************************************************************************
// A program that ask user for three floating number and output their average
// ****************************************************************************************************

#include <iostream>

using namespace std;

int main()
{
    float i, j, k;
    cout << "Write three decimal number seperated by space in the terminal" << endl;
    cin >> i >> j >> k;
    float avg = (i + j + k) / 3;
    cout << "There average is " << avg << endl;

    return 0;
}