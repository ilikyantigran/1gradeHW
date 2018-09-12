#include <iostream>
#include <cstdlib>
#include <math.h>

#define _USE_MATH_DEFINES

using namespace std;

int main()
{
    //(x*x - 2*x +2)/(x-1)
    double x;
    for (x = -4; x < 4.1; x = x + 0.5)
    {
        cout << (x*x - 2 * x + 2) / (x - 1) << endl;
    }
    return 0;
}
