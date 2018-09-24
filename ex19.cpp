#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <stdlib.h>
#include <list>
#include <iterator>
#include <algorithm>

#define _USE_MATH_DEFINES

using namespace std;

int main()
{
  int i = 1;
  string str;
  double n;
  double average = 0;
  string list = "";
  do {
    cin >> str;
    average+=atoi(str.c_str());
    n++;
  } while(str!="0");

  cout << average/(n-1)<< endl;
  return 0;
}
