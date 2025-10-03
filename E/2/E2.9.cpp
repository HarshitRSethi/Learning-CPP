#include <iostream>
#include <string>

using namespace std;

const string STARS35 = "***********************************";
const char STAR = '*';
const string BLANKS33 = "                                 ";
const string MSG = "Welcome to C++ Programming!";
const string BLANKS3 = "   ";

int main()
{
    cout << STARS35 << endl
         << STAR << BLANKS33 << STAR << endl;
    cout << STAR << BLANKS3 << MSG << BLANKS3 << STAR << endl;
    cout << STAR << BLANKS33 << STAR << endl
         << STARS35 << endl;
    return 0;
}