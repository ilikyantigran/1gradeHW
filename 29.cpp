//28) Найти сумму цифр целого числа n (водится с клавиатуры).
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
  int sum = 0;
  string n;
  cin >> n;
  for(int i =0; i<n.length();i++)
  {
    sum+=(int)n[i] - '0';
  }
  cout<<sum<<endl;
  return 0;
}
