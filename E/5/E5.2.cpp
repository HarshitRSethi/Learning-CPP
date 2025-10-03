// ********************************************************************************************************************************************
// A boolean expression true when two file that had been trying to be loaded are in failed state
// ********************************************************************************************************************************************

#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    bool open = true;
    ifstream inFile1;
    ifstream inFile2;

    inFile1.open("E5.2.txt");
    inFile2.open("E5.2.out");

    if ((!inFile1) && (!inFile2))
        open = false;

    if (open)
        cout << "File opened succsesfully" << endl;
    else
        cout << "There was an error in opening the file" << endl;

    return 0;
}