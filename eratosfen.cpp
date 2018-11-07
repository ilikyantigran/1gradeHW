#include <iostream>
#include <cstdlib>

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
      cout << i << endl;
  }
  
return 0;
}
