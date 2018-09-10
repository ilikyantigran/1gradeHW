#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <fstream>

#define _USE_MATH_DEFINES
using namespace std;
char sign(int x)
{
	if (x > 0)
		return '+';
	if(x < 0)
		return '-';
	if(x == 0)
		return '0';
    return 0;
}
int main()
{
	int x;
	cin >> x;
	cout << sign(x) << endl;
  return 0;
}
