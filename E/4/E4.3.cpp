// ****************************************************************************************************
// A program that read name into a single variable name although name would have three parts
// ****************************************************************************************************

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "What's your name?" << endl;
    string firstName, middleName, surName;
    cin >> firstName >> middleName >> surName;
    string name = firstName + ' ' + middleName + ' ' + surName;
    cout << name << endl;
    return 0;
}