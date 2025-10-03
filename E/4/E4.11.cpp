// ****************************************************************************************************
// A program that take radius of two circle from the txt file as input and save it in other filed that
// is named by user himself
// ****************************************************************************************************

#include <fstream>  // For files
#include <iostream> // For outsourced file name and printing
#include <cmath>    // For value of PI
#include <string>   // For strings

using namespace std;

int main()
{
    // Asking for name of outputing file
    cout << "Name of file in which data is to be sourced out" << endl;
    string name;
    cin >> name;

    // Opening file
    ifstream inFile;
    ofstream outFile;
    inFile.open("E4.11.txt");
    outFile.open(name.c_str());

    // Getting data
    int r1, r2;
    inFile >> r1 >> r2;

    // Calculating
    float c1 = 2 * M_PI * r1;
    float c2 = 2 * M_PI * r2;
    float a1 = r1 * r1 * M_PI;
    float a2 = r2 * r2 * M_PI;

    // Printing result
    cout << "Circumference and area of circle with radius " << r1 << " is " << c1 << " and " << a1 << '.' << endl
         << "Circumference and area of circle with radius " << r2 << " is " << c2 << " and " << a2 << '.' << endl;

    // Writing result

    outFile << "Circumference and area of circle with radius " << r1 << " is " << c1 << " and " << a1 << '.' << endl
            << "Circumference and area of circle with radius " << r2 << " is " << c2 << " and " << a2 << '.' << endl;

    // Closing Files
    inFile.close();
    outFile.close();
    return 0;
}