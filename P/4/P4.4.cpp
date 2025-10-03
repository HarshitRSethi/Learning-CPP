// ********************************************************************************************************************************************
// To create a program which ask file name from user open it, then read it to find comma, if it does
// then it print the word just after the comma. 
// Valid for only one comma
// ********************************************************************************************************************************************

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Take input from user
    string fileName;
    cout << "Name of the file from which data is to be read: ";
    cin >> fileName;

    // Open file
    ifstream file;
    file.open(fileName.c_str());

    // Store data in a string
    string data;
    getline(file, data);
    // If comma then find its position
    int commaPos = data.find(',');
    data = data.substr(commaPos + 2, 400);
    // print word next to comma
    int spacePos = data.find(' ');
    string word = data.substr(0, spacePos);
    cout << word << endl;

    // exit programn
    file.close();
    return 0;
}
