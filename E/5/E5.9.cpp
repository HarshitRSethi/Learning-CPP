// ********************************************************************************************************************************************
// A program that reads it data from two file and if neither are are in fail state then write lesser value of two in another file, if one is in
// fail state then write value of the one that is not in it, if both are in fail state then display error message
// ********************************************************************************************************************************************

#include <fstream> // For file input/output
#include <iostream>

using namespace std;

int main()
{
    // Declare files and variables
    ifstream inFile1, inFile2;
    ofstream outFile;
    inFile1.open("E5.9.txt");
    inFile2.open("E5.9.in");
    outFile.open("E5.9.out");
    int variable1, variable2;

    if (!outFile)
    {
        cout << "Couldn't open required file, please try again later" << endl;
        return 1;
    }

    // Read data
    inFile1 >> variable1;
    inFile2 >> variable2;
    if ((!inFile1) && (inFile2))
        outFile << variable2;
    else if ((!inFile2) && (inFile1))
        outFile << variable1;
    else if ((!inFile1) && (!inFile2))
    {
        cout << "Both the file have errors associated with them" << endl;
    }
    else
    {
        // Print result
        if (variable1 < variable2)
            outFile << variable1;
        else
            outFile << variable2;
    }
    inFile1.close();
    inFile2.close();
    outFile.close();
    return 0;
}