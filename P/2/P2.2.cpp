// ************************************************************************
// Printing all permutation of given 3 lines
// ************************************************************************

#include <iostream>
#include <string>

using namespace std;

const string LINE1 = "I saw the big brown bear.";
const string LINE2 = "The big brown bear saw me.";
const string LINE3 = "Oh! What a frightening experience";

int main()
{
    cout << LINE1 << endl
         << LINE2 << endl
         << LINE3 << endl
         << endl;
    cout << LINE2 << endl
         << LINE3 << endl
         << LINE1 << endl
         << endl;
    cout << LINE3 << endl
         << LINE1 << endl
         << LINE2 << endl
         << endl;
    cout << LINE1 << endl
         << LINE3 << endl
         << LINE2 << endl
         << endl;
    cout << LINE3 << endl
         << LINE2 << endl
         << LINE1 << endl
         << endl;
    cout << LINE2 << endl
         << LINE1 << endl
         << LINE3 << endl
         << endl;
    return 0;
}