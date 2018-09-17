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
  int count;
  double max, min;
  double sum =0;
  double x;
  max = -99999;
  min = 9999;
  cout << "Обработка последовательности дробных чисел. Введите количество чисел последовательности" <<endl;
  cin >> count;
  cout << "Вводите последовательность. После ввода каждого числа нажимайте <Enter>" <<endl;
  for (int i = 0; i < count; i++)
  {
    cin >> x;
    sum+=x;
    if(x>=max)
      max = x;
    if(x<=min)
        min = x;
    
  }
  cout << "Cреднее арифметическое: " << sum/count <<endl;
  cout << "Минимальное число: " << min <<endl;
  cout << "Максимальное число: " << max <<endl;
  return 0;
}
