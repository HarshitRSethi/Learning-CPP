//****************************************************************************
// Printing a chessboard
//****************************************************************************
#include <iostream>
#include <string>

using namespace std;

const string FIRST_ROW = " * * * *";   // Row starting from white
const string SECOUND_ROW = "* * * * "; // Row starting from black

int main()
{
    cout << FIRST_ROW << endl;   // Printing first row
    cout << SECOUND_ROW << endl; // Printing secound row
    cout << FIRST_ROW << endl;   // Printing third row and so on..
    cout << SECOUND_ROW << endl;
    cout << FIRST_ROW << endl;
    cout << SECOUND_ROW << endl;
    cout << FIRST_ROW << endl;
    cout << SECOUND_ROW << endl;
    return 0;
}