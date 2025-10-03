// ****************************************************************************************************
// Finding "and" in a given sentence
// ****************************************************************************************************

#include <iostream>
#include <string>

using namespace std;

const string SENTENCE = "I bought apples and bananas and oranges, and I made a big fruit salad.";

int main()
{
    int first = SENTENCE.find("and");
    cout << first << endl;
    string tmp = SENTENCE.substr(first + 3, 100);
    int second = tmp.find("and") + first + 3;
    cout << second << endl;
    tmp = SENTENCE.substr(second + 3, 100);
    int third = tmp.find("and") + second + 3;
    cout << third << endl;
    return 0;
}