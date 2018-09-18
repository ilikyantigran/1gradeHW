#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <fstream>
#include <cstring>

#define _USE_MATH_DEFINES

using namespace std;

int sum = 1;
int a;

int funx (int n)
{
  sum = 1;
  for(int i = 0; i< n; i++)
  {
    cin >> a;
    sum*=a;
  }
  return sum;
}
int funy (int n)
{
  sum = 1;
  for(int i = n; i< 2*n; i++)
  {
    cin >> a;
    sum*=a;
  }
  return sum;
}
int funz (int n)
{
  sum = 1;
  for(int i = 2*n; i< 3*n; i++)
  {
    cin >> a;
    sum*=a;
  }
  return sum;
}

int main()
{
  int n;
  cin >> n;
  cout << pow(funx(n),2) + pow(funy(n),2) + pow(funz(n),2) << endl;
  return 0;
}
