// ****************************************************************************************************
// A program that break name from format of first-middle-last and output respective firstname, middlename
// and last name
// ****************************************************************************************************

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "Harshit Rahul Sethi";                                             // Full name
    string firstName = name.substr(0, name.find(' '));                               // Finding and writing first name
    int firstNameLength = firstName.length();                                        // Length of first name
    string tmp = name.substr(name.find(' ') + 1, 50);                                // Creating a temporary string to store rest of the name in order to ease the search process for last name
    string middleName = tmp.substr(0, tmp.find(' '));                                // Finding and writing middle name
    int middleNameLength = middleName.length();                                      // Length of middle name
    string lastName = tmp.substr(tmp.find(' ') + 1, tmp.find('\0' - tmp.find(' '))); // Finding and writing last name
    int lastNameLength = lastName.length();                                          // Length of last name
    cout << "First name: " << firstName << " " << firstNameLength << endl;           // Printing first name
    cout << "Middle name: " << middleName << " " << middleNameLength << endl;        // Printing middle name
    cout << "Last name: " << lastName << " " << lastNameLength << endl;              // Printing last name

    return 0;
}