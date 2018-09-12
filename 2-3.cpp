#include <iostream>
#include <cstdlib>
#include <math.h>

#define _USE_MATH_DEFINES

using namespace std;

int main()
{
    double x,y,b;
    cin >> x >> y >> b;
    cout << (log(b-y) *sqrt(b-x)) << endl;
    return 0;
}
