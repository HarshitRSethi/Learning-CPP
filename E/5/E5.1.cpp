// ********************************************************************************************************************************************
// A boolean expression which is true for value 'blue' or 'Blue'
// ********************************************************************************************************************************************

#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool blue = false;
    string word;
    cout << "Type blue or Blue" << endl;
    cin >> word;
    if ((word == "Blue") || (word == "blue"))
        blue = true;

    if (blue)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}