#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <stdlib.h>
#include <list>
#include <fstream>
#include <cstring>
#include <iterator>
#include <algorithm>
// It returns a new iterator pointing to n position after the
 // base iterator given as first argument

// auto it1 = std::next(listOfStrs.begin(), 2);
 //std::cout << "3rd element = " << *it1 << std::endl;

#define _USE_MATH_DEFINES

using namespace std;

int main()
{
  int i =1;
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
