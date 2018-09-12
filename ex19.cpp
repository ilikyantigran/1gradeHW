#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
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
  list <double> Hight;
  double n;
  double average = 0;

  for(int i =0; ;i++)//считывание
  {
    cin >> n;
    if (n!=0)
      Hight.push_back(n);
    else break;
  }

  for (int j =0; j < Hight.size(); j++)//вывод
  {
    auto it = next(Hight.begin(),j);
    cout << *it << endl;;
  }

  for (int z =0; z < Hight.size(); z++)//поиск среднего
  {
    auto it2 = next(Hight.begin(),z);
    average+= (double)it2;
  }
  average/=Hight.size();
  cout << average << endl;
  return 0;
}
