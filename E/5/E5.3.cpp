// ********************************************************************************************************************************************
// A program that reads data from another file and also checks for fail state
// ********************************************************************************************************************************************

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ifstream inFile;
    inFile.open("E5.3.txt");

    if (!inFile)
    {
        cout << "There was an error opening the file, please try again" << endl;
        return 1;
    }
    string s;
    while (getline(inFile, s))
    {
        if (!inFile)
        {
            cout << "Sorry there was an error, try again later" << endl;
            return 2;
        }
        cout << s << endl;
    }

    inFile.close();
    return 0;
}