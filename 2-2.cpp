#include <iostream>
#include <cstdlib>
#include <math.h>

#define _USE_MATH_DEFINES

using namespace std;

int main()
{
    double x,a;
    cin >> x >> a;
    if (abs(x) < 1)
        cout << (a*log(abs(x))) << endl;
    else
        cout << (sqrt(a-x*x)) << endl;
    return 0;
}
