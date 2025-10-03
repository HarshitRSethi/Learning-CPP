// ********************************************************************************************************************************************
// A function that outputs the least of the value
// ********************************************************************************************************************************************

#include <iostream>

using namespace std;

int main()
{
    // Take inputs
    int a, b, c;
    cout << "Three number: ";
    cin >> a >> b >> c;

    // check for change, if change update counter
    int highest = a, counter = 0;
    if (b > highest)
        highest = b;
    if (c > highest)
        highest = c;
    if (a == highest)
        counter++;
    if (b == highest)
        counter++;
    if (c == highest)
        counter++;

    // Print result to match counter
    if (counter == 1)
        cout << highest << endl;
    else if (counter == 2)
        cout << highest << ' ' << highest << endl;
    else if (counter == 3)
        cout << highest << ' ' << highest << ' ' << highest << endl;
    return 0;
}