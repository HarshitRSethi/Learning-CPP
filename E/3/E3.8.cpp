// ****************************************************************************************************
// Storing blank in a string
// ****************************************************************************************************

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name = "What is your name?";
    int startOfMiddle = name.find(' ') + 1;
    cout << startOfMiddle << endl;
    return 0;
}