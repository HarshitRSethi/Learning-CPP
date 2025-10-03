//**************************************************************************
// Printing a business card in 4 * 2 dimensions
//**************************************************************************

#include <iostream>
#include <string>

using namespace std;
const string NAME = "Harshit R Sethi";
const string ADDRESS = "Airport Road, Indore";
const string PHONE = "+91-9243115704";
const string EMAIL = "harshitrsethi@gmail.com";

int main()
{
    // Making a single line such that it prints 2 column seperated by constant gaps
    string line1 = NAME + "                         " + NAME;
    string line2 = ADDRESS + "                    " + ADDRESS;
    string line3 = PHONE + "                          " + PHONE;
    string line4 = EMAIL + "                 " + EMAIL;

    // Printing lines
    cout << line1 << endl
         << line2 << endl
         << line3 << endl
         << line4 << endl
         << endl;

    cout << line1 << endl
         << line2 << endl
         << line3 << endl
         << line4 << endl
         << endl;

    cout << line1 << endl
         << line2 << endl
         << line3 << endl
         << line4 << endl
         << endl;

    cout << line1 << endl
         << line2 << endl
         << line3 << endl
         << line4 << endl
         << endl;

    return 0;
}