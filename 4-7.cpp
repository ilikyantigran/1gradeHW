#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <fstream>

#define _USE_MATH_DEFINES

using namespace std;

int GetRandom1(int m, int s, int i, int c)
{
  s = (m*s+i)%c;
  return s;
}

int main()
{
  int s , x;
  cin >> x;
  cout << "Первый вариант" <<endl;
  s=x;
  for (int j = 0; j < 5; j++)
  {
    s = GetRandom1(37,s,3,64);
    cout << s << endl;
  }
  cout << "Второй вариант" <<endl;
  s=x;
  for (int z = 0; z < 5; z++)
  {
    s = GetRandom1(25173,s,13849,65537);
    cout << s << endl;
  }
  return 0;
}
