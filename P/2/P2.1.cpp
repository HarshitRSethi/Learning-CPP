#include <iostream>
#include <string>

using namespace std;

const string EP = "Engineering Physics";
const string LA = "Linear Algebra";
const string TCS = "Technical Communication Skills";
const string FEE = "Fundamentals of Electricity and Electronics";
const string PSP = "Problem Solving with Programming";
const string LSPD = "Life Skills and Personality Development";
const string MON = "Monday ";
const string TUE = "Tuesday ";
const string WED = "Wednesday ";
const string THU = "Thursday ";
const string FRI = "Friday ";
int main()
{
    cout << endl
         << MON << "8:45 " << PSP << endl;
    cout << MON << "14:30 " << TCS << endl;
    cout << MON << "15:30 " << LA << endl
         << endl;
    cout << TUE << "9:55 " << LA << endl;
    cout << TUE << "11:00 " << FEE << endl
         << endl;
    cout << WED << "8:45 " << LSPD << endl;
    cout << WED << "9:55 " << FEE << endl;
    cout << WED << "11:00 " << EP << endl
         << endl;
    return 0;
}