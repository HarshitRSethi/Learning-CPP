// ****************************************************************************************************
// A program that takes input of tempratures from another file and print out the average of tempratures
// ****************************************************************************************************

#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    // Declaring variables
    float temp1, temp2, temp3, temp4, temp5, temp6;

    // Opening file
    ifstream temps;
    temps.open("E4.9.txt");

    // Taking data
    temps >> temp1 >> temp2 >> temp3 >> temp4 >> temp5 >> temp6;

    // Processing data
    float avg = (temp1 + temp2 + temp3 + temp4 + temp5 + temp6) / 6;

    // Printing result
    cout << "Average of the given tempratures is " << avg << endl;

    // Closing file
    temps.close();
    return 0;
}