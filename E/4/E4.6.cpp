// ****************************************************************************************************
// A program that read data from other file and store it
// ****************************************************************************************************

#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    float a1, a3, c1, c2, c3, e1; // Storing floating digits
    string b1, b3;                // Storing strings
    char a2, d1, d2, d3, d4;      // Storing chars
    int b2, b4;                   // Storing integers
    ifstream inFile;
    inFile.open("E4.6.txt");
    inFile >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> b4 >> c1;
    inFile.ignore(100, ',');
    inFile >> c2;
    inFile.ignore(100, ',');
    inFile >> c3 >> d1 >> d2 >> d3 >> d4;
    inFile.ignore(100, '$');
    inFile >> e1;
    inFile.close();
    return 0;
}