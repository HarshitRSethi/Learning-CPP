// ********************************************************************************************************************************************
// A C++ program that calculate bowling score
// ********************************************************************************************************************************************

#include <iostream>

using namespace std;

int main()
{
    // Take input
    int score1, score2, score3, score;
    cout << "First score: ";
    cin >> score1;
    if ((score1 < 0) || (score1 > 10))
    {
        cout << "First score not within rage[1 - 10]" << endl;
        return 1;
    }
    score = score1;
    // For first strike
    // If 10
    if (score == 10)
    {
        cout << "Secound score: ";
        cin >> score2;
        score += score2;
        if ((score2 < 0) || (score2 > 10))
        {
            cout << "Secound score not within rage[1 - 10]" << endl;
            return 2;
        }
        // If again 10
        if (score == 20)
        {
            cout << "Third score: ";
            cin >> score3;
            score += score3;
            // validating score 3
            if ((score3 < 0) || (score3 > 10))
            {
                cout << "Third score not within rage[1 - 10]" << endl;
                return 3;
            }
        }
        // If not again 10, then min. can be 10 and max 19
        else
        {
            cout << "Third score: ";
            cin >> score3;
            if (((score3 < 0) || (score3 > 10)) || ((score2 + score3) > 10))
            {
                cout << "Scores are incorrect" << endl;
                return 4;
            }
            score += score3;
        }
    }
    // If not 10
    else if (score < 10)
    {
        cout << "Secound score: ";
        cin >> score2;
        if ((score2 < 0) || (score2 > 10) || ((score1 + score2) > 10))
        {
            cout << "Scores are incorrect" << endl;
            return 5;
        }
        score += score2;
        // If completed 10
        if (score == 10)
        {
            cout << "Third score: ";
            cin >> score3;
            if ((score3 < 0) || (score3 > 10))
            {
                cout << "Third score not within rage[1 - 10]" << endl;
                return 6;
            }
            score += score3;
        }
        // If not completed 10 (no calculation of third)
    }
    // Print result
    cout << "Total Score: " << score << endl;
    return 0;
}