#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <fstream>
#include <cstring>

#define _USE_MATH_DEFINES

using namespace std;

int main()
{
int x,j;
bool ez = false;
j=0;
cin >> x;
int res = x;
for (int i = x; i >1 ; i--)
  {
    ez = true;
    for (j = 2; j < i; j++)
    {
      if (i%j==0)
      {
        ez = false;
        break;
      }
    }
    if (ez == true)
    {
      res = i;
      break;
    }
  }
cout << res << endl;
return 0;
}
