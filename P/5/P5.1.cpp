// ********************************************************************************************************************************************
// A C++ program that take char as input and print the corresponding International Civil Aviation Organization alphabet word (these are the
// words that pilots use when they need to spell something out over a noisy radio channel)
// ********************************************************************************************************************************************

#include <iostream>

using namespace std;

int main()
{
    // Declare variable
    char c;
    cout << "Write a letter: ";
    cin >> c;

    // Write if statements
    if ((c == 'a') || (c == 'A'))
        cout << "Alpha" << endl;
    else if ((c == 'b') || (c == 'B'))
        cout << "Bravo" << endl;
    else if ((c == 'c') || (c == 'C'))
        cout << "Charlie" << endl;
    else if ((c == 'd') || (c == 'D'))
        cout << "Delta" << endl;
    else if ((c == 'e') || (c == 'E'))
        cout << "Echo" << endl;
    else if ((c == 'f') || (c == 'F'))
        cout << "Foxtrot" << endl;
    else if ((c == 'g') || (c == 'G'))
        cout << "Golf" << endl;
    else if ((c == 'h') || (c == 'H'))
        cout << "Hotel" << endl;
    else if ((c == 'i') || (c == 'I'))
        cout << "India" << endl;
    else if ((c == 'j') || (c == 'J'))
        cout << "Juliet" << endl;
    else if ((c == 'k') || (c == 'K'))
        cout << "Kilo" << endl;
    else if ((c == 'l') || (c == 'L'))
        cout << "Lima" << endl;
    else if ((c == 'm') || (c == 'M'))
        cout << "Mike" << endl;
    else if ((c == 'n') || (c == 'N'))
        cout << "Novemeber" << endl;
    else if ((c == 'o') || (c == 'O'))
        cout << "Oscar" << endl;
    else if ((c == 'p') || (c == 'P'))
        cout << "Papa" << endl;
    else if ((c == 'q') || (c == 'Q'))
        cout << "Quebec" << endl;
    else if ((c == 'r') || (c == 'R'))
        cout << "Romeo" << endl;
    else if ((c == 's') || (c == 'S'))
        cout << "Sierra" << endl;
    else if ((c == 't') || (c == 'T'))
        cout << "Tango" << endl;
    else if ((c == 'u') || (c == 'U'))
        cout << "Uniform" << endl;
    else if ((c == 'v') || (c == 'V'))
        cout << "Victor" << endl;
    else if ((c == 'w') || (c == 'W'))
        cout << "Whiskey" << endl;
    else if ((c == 'x') || (c == 'X'))
        cout << "X-Ray" << endl;
    else if ((c == 'y') || (c == 'Y'))
        cout << "Yankee" << endl;
    else if ((c == 'z') || (c == 'Z'))
        cout << "Zulu" << endl;
    else
        cout << "Not an alphabatic charecter, please try again with different charecter" << endl;
    return 0;
}