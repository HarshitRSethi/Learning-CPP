// ****************************************************************************************************
// A program that break name from format of first-middle-last and output respective firstname, middlename
// and last name
// ****************************************************************************************************

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "Harshit Rahul Sethi";                 // Full name
    string firstName = name.substr(0, name.find(' '));   // Finding and writing first name
    string tmp = name.substr(name.find(' ') + 1, 50);    // Creating a temporary string to store rest of the name in order to ease the search process for last name
    string middleName = tmp.substr(0, tmp.find(' '));    // Finding and writing middle name
    string lastName = tmp.substr(tmp.find(' ') + 1, 50); // Finding and writing last name
    cout << "First name: " << firstName << endl;         // Printing first name
    cout << "Middle name: " << middleName << endl;       // Printing middle name
    cout << "Last name: " << lastName << endl;           // Printing last name

    return 0;
}