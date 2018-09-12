//Даны целые числа с1, с2, ..., с95.
//Подсчитать количество трех идущих подряд отрицательных чисел.
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
  int num =0;
  int sum = 0;
  int* array = new int[95];
  for (int i= 0; i< 95; i++)
  {
    cin >> array[i];
  }
  for (int j = 0; j<95; j++)
  {
    if (array[j] >= 0)
      num = 0;
    else
      num++;
    if (num >=3)
      sum++;
  }
  cout << sum<<endl;
  return 0;
}
