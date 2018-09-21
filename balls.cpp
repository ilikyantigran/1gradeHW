#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <fstream>
#include <cstring>

#define _USE_MATH_DEFINES

using namespace std;

long double fact(int N)
{
    if(N < 0)
        return 0;
    if (N == 0)
        return 1;
    else
        return N * fact(N - 1);
}


int main()
{
  int sum = 0;
  int* array = new int[10];
  for (int i = 0; i <=10; i++)
  {
    array[i-1] = i;
  }
  for(int i = 1; i<=10;i++)
  {
    sum+=fact(10)/(fact(i)*fact(10-i));
  }
  cout << sum << endl;
  return 0;
}
