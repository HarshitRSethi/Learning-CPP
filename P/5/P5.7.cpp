// ********************************************************************************************************************************************
// A program that calculate points. Suppose in a competition there are four judges, then this algorithm give all judges 0 - 10 points to rate
// each contestant, the one judge that rated lowest, his/her rating is excluded and others average are found and that is the rating of the
// performer
// ********************************************************************************************************************************************

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    // Take inputs
    int judge1, judge2, judge3, judge4;
    cout << "Rating of all judges: ";
    cin >> judge1 >> judge2 >> judge3 >> judge4;

    // Checking each score
    if ((judge1 < 0) || (judge1 > 10))
    {
        cout << "Rating of first judge is not withing range" << endl;
        return 1;
    }
    if ((judge2 < 0) || (judge2 > 10))
    {
        cout << "Rating of secound judge is not withing range" << endl;
        return 2;
    }
    if ((judge3 < 0) || (judge3 > 10))
    {
        cout << "Rating of third judge is not withing range" << endl;
        return 3;
    }
    if ((judge4 < 0) || (judge4 > 10))
    {
        cout << "Rating of fourth judge is not withing range" << endl;
        return 4;
    }

    // Check for lowest by using lowest value and lowest no. variable, lowestNumb give judge no. with lowest rating, if there is more than
    // one judge with lowest rating then it give no. of the first appearing judge who gave lowest rating
    int lowest = judge1, lowestNumb;
    if (lowest > judge2)
        lowest = judge2;
    if (lowest > judge3)
        lowest = judge3;
    if (lowest > judge4)
        lowest = judge4;

    if (lowest == judge1)
        lowestNumb = 1;
    if (lowest == judge2)
        lowestNumb = 2;
    if (lowest == judge3)
        lowestNumb = 3;
    if (lowest == judge4)
        lowestNumb = 4;

    // Calculate result according to counter
    float result;
    if (lowestNumb == 1)
        result = float((judge2 + judge3 + judge4)) / 3.0;
    else if (lowestNumb == 2)
        result = float((judge1 + judge3 + judge4)) / 3.0;
    else if (lowestNumb == 3)
        result = float((judge1 + judge2 + judge4)) / 3.0;
    else
        result = float((judge1 + judge2 + judge3)) / 3.0;

    cout << fixed << setprecision(2) << "Final Rating: " << result << endl;
    return 0;
}