// ********************************************************************************************************************************************
// A program that find median of 3 distinct numbers
// ********************************************************************************************************************************************

#include <iostream>

using namespace std;

int main()
{
    // Take inputs
    float a, b, c;
    cout << "Write three numbers: " << endl;
    cin >> a >> b >> c;
    int counter;
    float tmp;

    // Check if a is it by using counter
    tmp = a;
    counter = 0;
    if (a > b)
        counter++;
    if (a > c)
        counter++;
    if (counter == 1)
    {
        cout << "Median of " << a << ' ' << b << " and " << c << " is " << a << endl;
        return 0;
    }

    // Check if b is it by using counter
    tmp = b;
    counter = 0;
    if (b > a)
        counter++;
    if (b > c)
        counter++;
    if (counter == 1)
    {
        cout << "Median of " << a << ' ' << b << " and " << c << " is " << b << endl;
        return 0;
    }

    // Check if c is it by using counter
    tmp = c;
    counter = 0;
    if (c > a)
        counter++;
    if (c > b)
        counter++;
    if (counter == 1)
    {
        cout << fixed << "Median of " << a << ", " << b << " and " << c << " is " << c << endl;
        return 0;
    }

    return 0;
}