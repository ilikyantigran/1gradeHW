#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
  int a,b,del,x;
  x = 1;

  cin >> a;
  cin >> b;

  if (a<0 && b<0)
  {
    a*=-1;
    b*=-1;
  }

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
