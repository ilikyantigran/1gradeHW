#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <fstream>
#include <cstring>

#define _USE_MATH_DEFINES

using namespace std;

int main ()
{
int a,b,del,x;
x = 1;
cin >> a;
cin >> b;
if (a > b)
  del = b;
else
  del = a;
for (int i = 1; i <= del; i++)
{
  if (a%i == 0 && b%i == 0)
    x = i;
}
cout << x << endl;
return 0;
}
