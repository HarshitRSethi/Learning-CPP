//**************************************************
// PrintName Program
// This program print a name in two different format
//**************************************************

#include <iostream>
#include <string>

using namespace std;

const string FIRST_NAME = "Harshit";
const string LAST_NAME = "Sethi";
const char MIDDLE = 'R';

int main()
{
    string firstLast; // Name in first-last format
    string lastFirst; // Name in last-first format

    firstLast = FIRST_NAME + " " + LAST_NAME;
    cout << "Name in first-last format is " << firstLast << endl;

    lastFirst = LAST_NAME + ", " + FIRST_NAME;
    cout << "Name in last-first format is " << lastFirst << ", " << MIDDLE << '.' << endl;
    return 0;
}