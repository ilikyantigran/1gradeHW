#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>

#define _USE_MATH_DEFINES

using namespace std;

int main()
{
	//cin >>     cout<<
	double  r, S, n, p;
	cin >> S >> p >>n;
	r = p / 100;
	cout << (S*r*pow((1+r),n))/(12*(pow((1 + r), n)-1)) << endl;
}
