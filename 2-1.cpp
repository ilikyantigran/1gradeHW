#include <iostream>
#include <cstdlib>

#define _USE_MATH_DEFINES

using namespace std;

int main()
{
    cout << "V and S" << endl;
    double h, R, r, l;
    cin >> h >> R >> r >> l;
    cout << "V = " << (1/3*3.14*(R*R + R*r +r*r)) << endl;
    cout << "S = " << (3.14*(R*R + (R + r)*l + r * r)) << endl;
    return 0;
}
