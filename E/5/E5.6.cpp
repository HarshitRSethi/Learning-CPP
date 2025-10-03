// ********************************************************************************************************************************************
// A boolean expression true when either of two other bool are true and false when both are true or both are false
// ********************************************************************************************************************************************

#include <iostream>

using namespace std;

int main()
{
    bool bool1, bool2, bool3;
    cout << "Write values for both bool" << endl;
    cin >> bool1 >> bool2;
    if (((bool1) && (!bool2)) || ((bool2) && (!bool1)))
        bool3 = true;
    cout << bool3 << endl;
    return 0;
}