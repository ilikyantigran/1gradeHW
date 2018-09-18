//65)В целочисленном массиве A[1:n] найти число, повторяющееся максимальное количество раз.
//Если таких чисел несколько, то одно из них.
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
  int n;
  cin >> n;
  int previous;
  int* array = new int [n];
  previous = array[0];
  int sum = 1;
  int max = 1;
  for (int j =0; j<n;j++)
  {
    cin >> array[j];
  }
  for (int i = 0; i<n; i++)
  {
      if(array[i]==previous)
          {
          sum+=1;
          if (sum>= max)
            max = sum;
          }
      else sum = 1;
      previous = array[i];
  }
  cout << max << endl;
  return 0;
}
