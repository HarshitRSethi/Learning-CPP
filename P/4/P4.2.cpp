// ****************************************************************************************************
// A program that takes temprature from user as input, store them and the difference between current and
// next temprature in a file and display average of given tempratures
// ****************************************************************************************************

#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    // Opening file
    ofstream outFile;
    outFile.open("P4.2.txt");

    // Declaring variables
    float temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11, temp12, avg;

    // Taking input
    cout << "Write 12 temprature in celsius" << endl;
    cin >> temp1 >> temp2 >> temp3 >> temp4 >> temp5 >> temp6 >> temp7 >> temp8 >> temp9 >> temp10 >> temp11 >> temp12;

    // Proccessing data (Calculating average)
    avg = (temp1 + temp2 + temp3 + temp4 + temp5 + temp6 + temp7 + temp8 + temp9 + temp10 + temp11 +
           temp12) /
          12;

    // Performing output
    outFile << temp1 << endl
            << temp2 << ' ' << temp2 - temp1 << endl
            << temp3 << ' ' << temp3 - temp2 << endl
            << temp4 << ' ' << temp4 - temp3 << endl
            << temp5 << ' ' << temp5 - temp4 << endl
            << temp6 << ' ' << temp6 - temp5 << endl
            << temp7 << ' ' << temp7 - temp6 << endl
            << temp8 << ' ' << temp8 - temp7 << endl
            << temp9 << ' ' << temp9 - temp8 << endl
            << temp10 << ' ' << temp10 - temp9 << endl
            << temp11 << ' ' << temp11 - temp10 << endl
            << temp12 << ' ' << temp12 - temp11 << endl;

    cout << "Average of given tempratures is: " << avg << endl;

    // Closing file
    outFile.close();
    return 0;
}