// ****************************************************************************************************
// To make a program that store address with it's proper division like street1, town, state etc
// ****************************************************************************************************

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Opening file
    ifstream inFile;
    inFile.open("E4.7.txt");

    // Declaring data
    int streetNum, zip;
    string street1, street2, town, state;

    // Defining data
    inFile >> streetNum >> street1 >> street2 >> town;
    inFile >> state >> zip;

    // Processing data
    int a = town.find(',');
    town = town.substr(0, a);

    // Closing file
    inFile.close();
    return 0;
}