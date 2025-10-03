// ****************************************************************************************************
// Computing volume of cone, given height and radius
// ****************************************************************************************************

#include <iostream>
#include <cmath>

using namespace std;
const int RADIUS = 3;
const int HEIGHT = 5;

int main()
{
    float volume = float(1) / float(3) * M_PI * pow(RADIUS, 2) * HEIGHT;
    cout << volume << endl;

    return 0;
}