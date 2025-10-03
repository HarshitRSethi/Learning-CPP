// ****************************************************************************************************
// A program that inputs name in last, first middle format and output in fist middle last format
// ****************************************************************************************************

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Taking input
    string lastName, firstName, middleName;
    cout << "What's your name" << endl;
    cin >> lastName >> firstName >> middleName;

    // Formatting
    int finder = lastName.find(',');
    lastName = lastName.substr(0, finder);
    string name = firstName + ' ' + middleName + ' ' + lastName;

    // Displaying
    cout << name << endl;

    return 0;
}